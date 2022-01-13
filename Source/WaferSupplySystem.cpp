#include "WaferSupplySystem.h"

CWaferSupplySystem::CWaferSupplySystem(QObject *parent)
    :QObject(parent)
{
    m_pAlignerInfo      = new CAlignerInfo();
    m_pWfStageInfo      = new CWfStageInfo();
    m_pRobotCtrl        = new CRobotController(&m_logModel);
    m_pLPCtrl           = new CLoadPortController(&m_logModel);
    m_pRFIDCtrl         = new CRFIDController(&m_logModel);
    for(int i = 0; i < MAX_WAFER_SLOT; i++){
        if(i < 13){
            g_listInfo.addSlot(CSlotInfo(ENUMS::SLOT_HAS_WAFER));
        }
        else {
            g_listInfo.addSlot(CSlotInfo(ENUMS::SLOT_NO_WAFER));
        }
    }

    m_pRobotCtrl->SetSettingData(&m_settingData);
    m_pLPCtrl->SetSettingData(&m_settingData);
    m_pRFIDCtrl->SetSettingData(&m_settingData);
}

CWaferSupplySystem::~CWaferSupplySystem()
{
    if(m_pAlignerInfo != 0){
        delete m_pAlignerInfo;
        m_pAlignerInfo = 0;
    }
    if(m_pWfStageInfo != 0){
        delete m_pWfStageInfo;
        m_pWfStageInfo = 0;
    }
    if(m_pRobotCtrl != 0){
        delete m_pRobotCtrl;
        m_pRobotCtrl = 0;
    }
}

void CWaferSupplySystem::OnUpdateUI(/*int type*/)
{
    m_logModel.addLogView("Start Application", "Info", "green");
}

void CWaferSupplySystem::OnUpdateRBLog(QString msg, QString dir)
{
    m_logModel.addLogView(msg, dir);
}

void CWaferSupplySystem::OnUpdateLPLog(QString msg, QString dir)
{
    m_logModel.addLogView(msg, dir);
}

void CWaferSupplySystem::OnUpdateRFIDLog(QString msg, QString dir)
{
    m_logModel.addLogView(msg, dir);
}

void CWaferSupplySystem::OnChangedScreen()
{
    QObject *settingScreen = m_pEngine->rootObjects().first()->findChild<QObject*>("settingScreen");
    if(settingScreen){
        QObject::connect(settingScreen, SIGNAL(saveSettingData()), this, SLOT(OnSaveSetting()));
    }
    QObject *lpCommandScreen = m_pEngine->rootObjects().first()->findChild<QObject*>("lpCommandScreen");
    if(lpCommandScreen){
        QObject::connect(lpCommandScreen, SIGNAL(sendLPEvent(QString)), this, SLOT(OnSendLPEvent(QString)));
        QObject::connect(lpCommandScreen, SIGNAL(setAllSlotStatus(int)), this, SLOT(OnChangeAllSlotStatus(int)));
        QObject::connect(lpCommandScreen, SIGNAL(setSlotStatus(int, int)), this, SLOT(OnChangeSlotStatus(int, int)));

    }
}

void CWaferSupplySystem::OnSaveSetting()
{
    // Save the current setting to config file
    this->SaveConfigFile();
}

void CWaferSupplySystem::OnSendLPEvent(QString msg)
{
    m_pLPCtrl->AddMessageToQueue(msg);
}

void CWaferSupplySystem::OnChangeAllSlotStatus(int status)
{
    for(int i = 0; i < MAX_WAFER_SLOT; i++){
        if(status == ENUMS::SLOT_HAS_WAFER || status == ENUMS::SLOT_NO_WAFER){        // Has Wafer
            g_listInfo.changeSlotInfo(i, status);
        }
    }
}

void CWaferSupplySystem::OnChangeSlotStatus(int slotNo, int status)
{
    g_listInfo.changeSlotInfo(slotNo, status);
}

void CWaferSupplySystem::InitApplication()
{
    qmlRegisterUncreatableType<ENUMS>("Enum", 1, 3, "Enum", "");
    m_pContext = m_pEngine->rootContext();

    // Set the model to qml
    m_pContext->setContextProperty("AlignerInfo", m_pAlignerInfo);
    m_pContext->setContextProperty("WfStageInfo", m_pWfStageInfo);
    m_logModel.addLogView("Start Application", "Info", "green");
    m_pContext->setContextProperty("logModel", &m_logModel);
    m_pContext->setContextProperty("listSlot", &g_listInfo);
    m_pContext->setContextProperty("settingData", &m_settingData);

    m_pContext->setContextProperty("cassetteInfo", QVariant::fromValue(m_cassetteInfo));
    //    QObject::connect(m_pRobotCtrl, SIGNAL(updateGUI()), this, SLOT(OnUpdateUI()));
    QObject::connect(m_pRobotCtrl, SIGNAL(updateRBLog(QString, QString)), this, SLOT(OnUpdateRBLog(QString, QString)));
    QObject::connect(m_pLPCtrl, SIGNAL(updateLPLog(QString, QString)), this, SLOT(OnUpdateLPLog(QString, QString)));
    QObject::connect(m_pRFIDCtrl, SIGNAL(updateRFIDLog(QString, QString)), this, SLOT(OnUpdateRFIDLog(QString, QString)));

    const QUrl url(QStringLiteral("qrc:/Main.qml"));
    m_pEngine->load(url);
    if(m_pEngine->rootObjects().isEmpty())
        return;
    QObject *rootObject = m_pEngine->rootObjects().first();
    QObject::connect(rootObject, SIGNAL(changedScreen()), this, SLOT(OnChangedScreen()));
}

void CWaferSupplySystem::InitFont()
{
    qint32 fontId = QFontDatabase::addApplicationFont(":/Font/ZenKakuGothicNew-Medium.ttf");
    if(fontId >= 0){
        QStringList fontList = QFontDatabase::applicationFontFamilies(fontId);
        QString family = fontList.at(0);
        QGuiApplication::setFont(QFont(family));
    }
}

void CWaferSupplySystem::SetQmlAppEngine(QQmlApplicationEngine *engine)
{
    this->m_pEngine = engine;
}

void CWaferSupplySystem::ReadConfigFile()
{
    QString projectPath = QCoreApplication::applicationDirPath();
    projectPath += CONFIG_FILE;
    if(QFile(projectPath).exists()){
        QSettings settings(projectPath, QSettings::IniFormat);
        settings.sync();
        settings.beginGroup("Setting");
        // Get value for language
        int language = settings.value(STR_INI_LANG, 0).toInt();
        if(language >= 0 && language < ENUMS::LANG_MAX){
            m_settingData.setLanguage(language);
        }
        // Get value for Port No
        int lanPortNo = settings.value(STR_INI_RB_PORTNO, 0).toInt();
        if(lanPortNo > 0 && lanPortNo < 999999){
            m_settingData.setLanPortNo(lanPortNo);
        }
        // Get value for LP COM Name
        QString strLPComName = settings.value(STR_INI_LP_COMNO, "").toString();
        int lpComName = mapComName[strLPComName];
        if(lpComName >= ENUMS::COM1 && lpComName < ENUMS::COM_MAX){
            m_settingData.setLpComName(lpComName);
        }
        // Get value for LP BaudRate
        QString strBaudRate = settings.value(STR_INI_LP_BAUD, "").toString();
        int lpBaudRate = mapBaudRate[strBaudRate];
        if(lpBaudRate >= ENUMS::BAUD4800 && lpBaudRate < ENUMS::BAUD_MAX){
            m_settingData.setLpBaudRate(lpBaudRate);
        }
        // Get value for LP Data Size
        QString strLPDataSize = settings.value(STR_INI_LP_DATA_SIZE, "").toString();
        int lpDataSize = mapDataSize[strLPDataSize];
        if(lpDataSize >= ENUMS::DATA_SIZE_7 && lpDataSize < ENUMS::DATA_SIZE_MAX){
            m_settingData.setLpDataSize(lpDataSize);
        }
        // Get value for LP Parity
        QString strLPParity = settings.value(STR_INI_LP_PARITY, "").toString();
        int lpParity = mapParity[strLPParity];
        if(lpParity >= ENUMS::PARITY_NONE && lpParity < ENUMS::PARITY_MAX){
            m_settingData.setLpParity(lpParity);
        }

        // Get value for RFID COM Name
        QString strRFIDComName = settings.value(STR_INI_RFID_COMNO, "").toString();
        int rfidComName = mapComName[strRFIDComName];
        if(rfidComName >= ENUMS::COM1 && rfidComName < ENUMS::COM_MAX){
            m_settingData.setRfidComName(rfidComName);
        }
        // Get value for RFID BaudRate
        QString strRFIDBaudRate = settings.value(STR_INI_RFID_BAUD, "").toString();
        int rfidBaudRate = mapBaudRate[strRFIDBaudRate];
        if(rfidBaudRate >= ENUMS::BAUD4800 && rfidBaudRate < ENUMS::BAUD_MAX){
            m_settingData.setRfidBaudRate(rfidBaudRate);
        }
        // Get value for RFID Data Size
        QString strRFIDDataSize = settings.value(STR_INI_RFID_DATA_SIZE, "").toString();
        int rfidDataSize = mapDataSize[strRFIDDataSize];
        if(rfidDataSize >= ENUMS::DATA_SIZE_7 && rfidDataSize < ENUMS::DATA_SIZE_MAX){
            m_settingData.setRfidDataSize(rfidDataSize);
        }
        // Get value for RFID Parity
        QString strRFIDParity = settings.value(STR_INI_RFID_PARITY, "").toString();
        int rfidParity = mapParity[strRFIDParity];
        if(rfidParity >= ENUMS::PARITY_NONE && rfidParity < ENUMS::PARITY_MAX){
            m_settingData.setRfidParity(rfidParity);
        }
        // Get value for Load Port Response mode (ACK or NAK)
        int lpResponseMode = settings.value(STR_INI_LP_RES_MODE, 0).toInt();
        if(lpResponseMode == ENUMS::LP_RES_ACK || lpResponseMode == ENUMS::LP_RES_NAK){
            m_settingData.setLpResponseMode(lpResponseMode);
        }
        // Get value for Load Port Response mode (ACK or NAK)
        int lpTerminateMode = settings.value(STR_INI_LP_TER_MODE, 0).toInt();
        if(lpTerminateMode == ENUMS::LP_TER_INF || lpTerminateMode == ENUMS::LP_TER_ABS){
            m_settingData.setLpTerminateMode(lpTerminateMode);
        }
        settings.endGroup();
    }
}

void CWaferSupplySystem::SaveConfigFile()
{
    QString projectPath = QCoreApplication::applicationDirPath();
    projectPath += CONFIG_FILE;
    if(QFile(projectPath).exists()){
        QSettings settings(projectPath, QSettings::IniFormat);
        settings.sync();
        settings.beginGroup("Setting");
        settings.setValue(STR_INI_LANG,             m_settingData.language());
        settings.setValue(STR_INI_RB_PORTNO,        m_settingData.lanPortNo());
        settings.setValue(STR_INI_LP_COMNO,         reverse_mapComName[m_settingData.lpComName()]);
        settings.setValue(STR_INI_LP_BAUD,          reverse_mapBaudRate[m_settingData.lpBaudRate()]);
        settings.setValue(STR_INI_LP_DATA_SIZE,     reverse_mapDataSize[m_settingData.lpDataSize()]);
        settings.setValue(STR_INI_LP_PARITY,        reverse_mapParity[m_settingData.lpParity()]);

        settings.setValue(STR_INI_RFID_COMNO,           reverse_mapComName[m_settingData.rfidComName()]);
        settings.setValue(STR_INI_RFID_BAUD,            reverse_mapBaudRate[m_settingData.rfidBaudRate()]);
        settings.setValue(STR_INI_RFID_DATA_SIZE,       reverse_mapDataSize[m_settingData.rfidDataSize()]);
        settings.setValue(STR_INI_RFID_PARITY,          reverse_mapParity[m_settingData.rfidParity()]);
        settings.setValue(STR_INI_LP_RES_MODE,          m_settingData.lpResponseMode());
        settings.setValue(STR_INI_LP_TER_MODE,          m_settingData.lpTerminateMode());
        settings.endGroup();
    }
}

void CWaferSupplySystem::InitConnection()
{
    m_pRobotCtrl->OpenPortServer();
    m_pLPCtrl->OpenSerialCom();
    m_pRFIDCtrl->OpenSerialCom();
}

int CWaferSupplySystem::GetSettingLanguage()
{
    return m_settingData.language();
}
