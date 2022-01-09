#include "RFIDController.h"

CRFIDController::CRFIDController(CLogModel *log, QObject *parent)
    :QObject(parent)
{
    m_pRFIDComm = new CRFIDComm(log);
    m_pSendCmdThread    = new QThread();
    m_pRFIDComm->moveToThread(m_pSendCmdThread);
    connect(m_pRFIDComm, SIGNAL(destroyed(QObject*)), m_pSendCmdThread, SLOT(quit()));
    connect(m_pSendCmdThread, SIGNAL(finished()), m_pSendCmdThread, SLOT(deleteLater()));
    QObject::connect(this, SIGNAL(parserCommand(QByteArray)), m_pRFIDComm, SLOT(OnParserCommand(QByteArray)));
    QObject::connect(m_pRFIDComm, SIGNAL(handleRFIDMsg()), this, SLOT(OnHandleReceiveMsg()));
    QObject::connect(m_pRFIDComm, SIGNAL(addOperationLog(QString, QString)), this, SLOT(OnRFIDLog(QString, QString)));
    m_pSendCmdThread->start();
    m_pRFIDComm->SetQueueRMessage(&m_queueReceiveMsg);
}

void CRFIDController::SetSettingData(CSettingData *data)
{
    m_pRFIDComm->SetSettingData(data);
}

bool CRFIDController::OpenSerialCom()
{
    return m_pRFIDComm->OpenSerialCom();
}

void CRFIDController::OnHandleReceiveMsg()
{
    while(m_queueReceiveMsg.size() > 0){
        QByteArray msg = m_queueReceiveMsg.front();
        m_queueReceiveMsg.pop_front();
        // Handle the receive message
        // emit the signal to the Manipulator thread
        emit parserCommand(msg);
    }
}

void CRFIDController::OnRFIDLog(QString msg, QString dir)
{
    updateRFIDLog(msg, dir);
}
