#include "LoadPortComm.h"

typedef std::map<QString, int> MAPCMD;
MAPCMD MapLoadPortCmd = {
    {"SET:RESET", Cmd_SET_RESET},
    {"SET:INITL", Cmd_SET_INITL},
    {"SET:LPLOD", Cmd_SET_LPLOD},
    {"SET:BLLOD", Cmd_SET_BLLOD},
    {"SET:LOLOD", Cmd_SET_LOLOD},
    {"SET:LPULD", Cmd_SET_LPULD},
    {"SET:BLULD", Cmd_SET_BLULD},
    {"SET:LOULD", Cmd_SET_LOULD},
    {"SET:LPMSW", Cmd_SET_LPMSW},
    {"SET:BLMSW", Cmd_SET_BLMSW},
    {"SET:LOMSW", Cmd_SET_LOMSW},
    {"SET:LPCON", Cmd_SET_LPCON},
    {"SET:BLCON", Cmd_SET_BLCON},
    {"SET:LOCON", Cmd_SET_LOCON},
    {"SET:LPCST", Cmd_SET_LPCST},
    {"SET:BLCST", Cmd_SET_BLCST},
    {"SET:LOCST", Cmd_SET_LOCST},
    {"SET:LON07", Cmd_SET_LON07},
    {"SET:LBL07", Cmd_SET_LBL07},
    {"SET:LOF07", Cmd_SET_LOF07},
    {"SET:LON08", Cmd_SET_LON08},
    {"SET:LBL08", Cmd_SET_LBL08},
    {"SET:LOF08", Cmd_SET_LOF08},
    {"SET:LPLD1", Cmd_SET_LPLD1},
    {"SET:BLLD1", Cmd_SET_BLLD1},
    {"SET:LOLD1", Cmd_SET_LOLD1},
    {"SET:LPLD2", Cmd_SET_LPLD2},
    {"SET:BLLD2", Cmd_SET_BLLD2},
    {"SET:LOLD2", Cmd_SET_LOLD2},
    {"SET:LPLD3", Cmd_SET_LPLD3},
    {"SET:BLLD3", Cmd_SET_BLLD3},
    {"SET:LOLD3", Cmd_SET_LOLD3},
    {"SET:LPLD4", Cmd_SET_LPLD4},
    {"SET:BLLD4", Cmd_SET_BLLD4},
    {"SET:LOLD4", Cmd_SET_LOLD4},
    {"SET:LON01", Cmd_SET_LON01},
    {"SET:LBL01", Cmd_SET_LBL01},
    {"SET:LOF01", Cmd_SET_LOF01},
    {"SET:LON02", Cmd_SET_LON02},
    {"SET:LBL02", Cmd_SET_LBL02},
    {"SET:LOF02", Cmd_SET_LOF02},
    {"SET:LON03", Cmd_SET_LON03},
    {"SET:LBL03", Cmd_SET_LBL03},
    {"SET:LOF03", Cmd_SET_LOF03},
    {"SET:LON04", Cmd_SET_LON04},
    {"SET:LBL04", Cmd_SET_LBL04},
    {"SET:LOF04", Cmd_SET_LOF04},
    {"SET:LON05", Cmd_SET_LON05},
    {"SET:LBL05", Cmd_SET_LBL05},
    {"SET:LOF05", Cmd_SET_LOF05},
    {"SET:LON06", Cmd_SET_LON06},
    {"SET:LBL06", Cmd_SET_LBL06},
    {"SET:LOF06", Cmd_SET_LOF06},
    {"SET:LON09", Cmd_SET_LON09},
    {"SET:LBL09", Cmd_SET_LBL09},
    {"SET:LOF09", Cmd_SET_LOF09},
    {"SET:PARAM", Cmd_SET_PARAM},
    {"SET:SAVE1", Cmd_SET_SAVE1},
    {"SET:CLCNT", Cmd_SET_CLCNT},
    {"MOD:ONMGV", Cmd_MOD_ONMGV},
    {"MOD:MENTE", Cmd_MOD_MENTE},
    {"MOD:TEACH", Cmd_MOD_TEACH},
    {"GET:STATE", Cmd_GET_STATE},
    {"GET:VERSN", Cmd_GET_VERSN},
    {"GET:LEDST", Cmd_GET_LEDST},
    {"GET:MAPDT", Cmd_GET_MAPDT},
    {"GET:MAPRD", Cmd_GET_MAPRD},
    {"GET:WFCNT", Cmd_GET_WFCNT},
    {"GET:SELOP", Cmd_GET_SELOP},
    {"GET:LOGID", Cmd_GET_LOGID},
    {"GET:LOGDT", Cmd_GET_LOGDT},
    {"GET:TOCNT", Cmd_GET_TOCNT},
    {"GET:TRCNT", Cmd_GET_TRCNT},
    {"MOV:ORGSH", Cmd_MOV_ORGSH},
    {"MOV:ABORG", Cmd_MOV_ABORG},
    {"MOV:CLOAD", Cmd_MOV_CLOAD},
    {"MOV:CLDDK", Cmd_MOV_CLDDK},
    {"MOV:CLDYD", Cmd_MOV_CLDYD},
    {"MOV:CLDOP", Cmd_MOV_CLDOP},
    {"MOV:CLDMP", Cmd_MOV_CLDMP},
    {"MOV:CLMPO", Cmd_MOV_CLMPO},
    {"MOV:CULOD", Cmd_MOV_CULOD},
    {"MOV:CULDK", Cmd_MOV_CULDK},
    {"MOV:CUDCL", Cmd_MOV_CUDCL},
    {"MOV:CUDNC", Cmd_MOV_CUDNC},
    {"MOV:CULYD", Cmd_MOV_CULYD},
    {"MOV:CULFC", Cmd_MOV_CULFC},
    {"MOV:CUDMP", Cmd_MOV_CUDMP},
    {"MOV:CUMDK", Cmd_MOV_CUMDK},
    {"MOV:CUMFC", Cmd_MOV_CUMFC},
    {"MOV:MAPD1", Cmd_MOV_MAPD1},
    {"MOV:MAPD2", Cmd_MOV_MAPD2},
    {"MOV:MAPDO", Cmd_MOV_MAPDO},
    {"MOV:REMAP", Cmd_MOV_REMAP},
    {"MOV:PODOP", Cmd_MOV_PODOP},
    {"MOV:PODCL", Cmd_MOV_PODCL},
    {"MOV:VACON", Cmd_MOV_VACON},
    {"MOV:VACOF", Cmd_MOV_VACOF},
    {"MOV:DOROP", Cmd_MOV_DOROP},
    {"MOV:DORCL", Cmd_MOV_DORCL},
    {"MOV:MAPOP", Cmd_MOV_MAPOP},
    {"MOV:MAPCL", Cmd_MOV_MAPCL},
    {"MOV:ZMPUP", Cmd_MOV_ZMPUP},
    {"MOV:ZMPDW", Cmd_MOV_ZMPDW},
    {"MOV:ZDRUP", Cmd_MOV_ZDRUP},
    {"MOV:ZDRDW", Cmd_MOV_ZDRDW},
    {"MOV:ZDRMP", Cmd_MOV_ZDRMP},
    {"MOV:ZMDMP", Cmd_MOV_ZMDMP},
    {"MOV:ZORGN", Cmd_MOV_ZORGN},
    {"MOV:ZMPST", Cmd_MOV_ZMPST},
    {"MOV:ZMPED", Cmd_MOV_ZMPED},
    {"MOV:MSTON", Cmd_MOV_MSTON},
    {"MOV:MSTOF", Cmd_MOV_MSTOF},
    {"MOV:YWAIT", Cmd_MOV_YWAIT},
    {"MOV:YDOOR", Cmd_MOV_YDOOR},
    {"MOV:DORBK", Cmd_MOV_DORBK},
    {"MOV:DORFW", Cmd_MOV_DORFW},
    {"MOV:RETRY", Cmd_MOV_RETRY},
    {"MOV:STOP_", Cmd_MOV_STOP_},
    {"MOV:PAUSE", Cmd_MOV_PAUSE},
    {"MOV:ABORT", Cmd_MOV_ABORT},
    {"MOV:RESUM", Cmd_MOV_RESUM},
    {"MOV:N2STA", Cmd_MOV_N2STA},
    {"MOV:N2STP", Cmd_MOV_N2STP},
    {"MOV:N2OPN", Cmd_MOV_N2OPN},
    {"MOV:N2CLO", Cmd_MOV_N2CLO},
    {"MOV:NZLUP", Cmd_MOV_NZLUP},
    {"MOV:NZLDW", Cmd_MOV_NZLDW},
    {"MOV:N2FPR", Cmd_MOV_N2FPR},
    {"MOV:N2RPR", Cmd_MOV_N2RPR},
    {"MOV:N2OP1", Cmd_MOV_N2OP1},
    {"MOV:N2OP2", Cmd_MOV_N2OP2},
    {"MOV:N2OP3", Cmd_MOV_N2OP3},
    {"MOV:N2CL1", Cmd_MOV_N2CL1},
    {"MOV:N2CL2", Cmd_MOV_N2CL2},
    {"MOV:N2CL3", Cmd_MOV_N2CL3},
    {"MOV:FNZUP", Cmd_MOV_FNZUP},
    {"MOV:FNZDW", Cmd_MOV_FNZDW},
    {"MOV:RDID1", Cmd_MOV_RDID1},
};


CLoadPortComm::CLoadPortComm(CLogModel *model, QObject *parent)
    :QObject(parent)
{
    m_pLogModel = model;
}

CLoadPortComm::~CLoadPortComm()
{

}

void CLoadPortComm::SetQueueRMessage(QQueue<QByteArray> *queue)
{
    this->m_pQueueReceiveCmd = queue;
}

void CLoadPortComm::SetSettingData(CSettingData *data)
{
    this->m_pSettingData = data;
}

bool CLoadPortComm::OpenComPort()
{
    bool r = true;
    m_pSerialConnection = new CSerialConnection();
    QString comName = reverse_mapComName[m_pSettingData->lpComName()];
    QString strBaudRate = reverse_mapComName[m_pSettingData->lpBaudRate()];
    int iBaudRate = strBaudRate.toUInt();
    r = m_pSerialConnection->OpenPortCom(comName, iBaudRate);
    connect(m_pSerialConnection, SIGNAL(RecieveData(QByteArray)), this, SLOT(OnReceiveData(QByteArray)));
    connect(this, SIGNAL(SendData(QByteArray)), m_pSerialConnection, SLOT(OnSendData(QByteArray)));
    return r;
}

void CLoadPortComm::OnReceiveData(QByteArray data)
{
    m_pQueueReceiveCmd->push_back(data);
    emit handleLPMsg();            // emit to Load Port Controller thread
}

void CLoadPortComm::OnParserCommand(QByteArray data)
{
    int len = data.size();
    QString cmdName;
    Char2CommandString(data,cmdName,len);
    qDebug() << "Data:" + cmdName;
    if(MapLoadPortCmd.find(cmdName) == MapLoadPortCmd.end()){
        return;
    }

    emit addOperationLog(cmdName, "App->LP");
    // Checksum calculator
    if (0/*!RecvChecksumCalculator(data, data.size())*/) {
        qDebug() << "Check SUM NG";
        emit addOperationLog("Check SUM NG", "Error");
        return;
    }
    else {
        qDebug() << "Check SUM OK";
        int cmdNo = MapLoadPortCmd[cmdName];
        switch (cmdNo) {
        case Cmd_SET_RESET:
            this->SendLPCommand_SET_RESET();
            break;
        case Cmd_SET_INITL:
            break;
        case Cmd_SET_LPLOD:
            this->SendLPCommand_SET_LPLOD();
            break;
        case Cmd_SET_BLLOD:
            this->SendLPCommand_SET_BLLOD();
            break;
        case Cmd_SET_LOLOD:
            this->SendLPCommand_SET_LOLOD();
            break;
        case Cmd_SET_LPULD:
            this->SendLPCommand_SET_LPULD();
            break;
        case Cmd_SET_BLULD:
            this->SendLPCommand_SET_BLULD();
            break;
        case Cmd_SET_LOULD:
            this->SendLPCommand_SET_LOULD();
            break;
        case Cmd_SET_LPMSW:
            break;
        case Cmd_SET_BLMSW:
            break;
        case Cmd_SET_LOMSW:
            break;
        case Cmd_SET_LPCON:
            break;
        case Cmd_SET_BLCON:
            break;
        case Cmd_SET_LOCON:
            break;
        case Cmd_SET_LPCST:
            break;
        case Cmd_SET_BLCST:
            break;
        case Cmd_SET_LOCST:
            break;
        case Cmd_SET_LON07:
            break;
        case Cmd_SET_LBL07:
            break;
        case Cmd_SET_LOF07:
            break;
        case Cmd_SET_LON08:
            break;
        case Cmd_SET_LBL08:
            break;
        case Cmd_SET_LOF08:
            break;
        case Cmd_SET_LPLD1:
            break;
        case Cmd_SET_BLLD1:
            break;
        case Cmd_SET_LOLD1:
            break;
        case Cmd_SET_LPLD2:
            break;
        case Cmd_SET_BLLD2:
            break;
        case Cmd_SET_LOLD2:
            break;
        case Cmd_SET_LPLD3:
            break;
        case Cmd_SET_BLLD3:
            break;
        case Cmd_SET_LOLD3:
            break;
        case Cmd_SET_LPLD4:
            break;
        case Cmd_SET_BLLD4:
            break;
        case Cmd_SET_LOLD4:
            break;
        case Cmd_SET_LON01:
            break;
        case Cmd_SET_LBL01:
            break;
        case Cmd_SET_LOF01:
            break;
        case Cmd_SET_LON02:
            break;
        case Cmd_SET_LBL02:
            break;
        case Cmd_SET_LOF02:
            break;
        case Cmd_SET_LON03:
            break;
        case Cmd_SET_LBL03:
            break;
        case Cmd_SET_LOF03:
            break;
        case Cmd_SET_LON04:
            break;
        case Cmd_SET_LBL04:
            break;
        case Cmd_SET_LOF04:
            break;
        case Cmd_SET_LON05:
            break;
        case Cmd_SET_LBL05:
            break;
        case Cmd_SET_LOF05:
            break;
        case Cmd_SET_LON06:
            break;
        case Cmd_SET_LBL06:
            break;
        case Cmd_SET_LOF06:
            break;
        case Cmd_SET_LON09:
            break;
        case Cmd_SET_LBL09:
            break;
        case Cmd_SET_LOF09:
            break;
        case Cmd_SET_PARAM:
            break;
        case Cmd_SET_SAVE1:
            break;
        case Cmd_SET_CLCNT:
            break;
        case Cmd_MOD_ONMGV:
            break;
        case Cmd_MOD_MENTE:
            break;
        case Cmd_MOD_TEACH:
            break;
        case Cmd_GET_STATE:
            this->SendLPCommand_GET_STATE();
            break;
        case Cmd_GET_VERSN:
            this->SendLPCommand_GET_VERSN();
            break;
        case Cmd_GET_LEDST:
            break;
        case Cmd_GET_MAPDT:
            break;
        case Cmd_GET_MAPRD:
            this->SendLPCommand_GET_MAPRD();
            break;
        case Cmd_GET_WFCNT:
            break;
        case Cmd_GET_SELOP:
            break;
        case Cmd_GET_LOGID:
            break;
        case Cmd_GET_LOGDT:
            break;
        case Cmd_GET_TOCNT:
            break;
        case Cmd_GET_TRCNT:
            break;
        case Cmd_MOV_ORGSH:
            break;
        case Cmd_MOV_ABORG:
            this->SendLPCommand_MOV_ABORG();
            break;
        case Cmd_MOV_CLOAD:
            this->SendLPCommand_MOV_CLOAD();
            break;
        case Cmd_MOV_CLDDK:
            break;
        case Cmd_MOV_CLDYD:
            break;
        case Cmd_MOV_CLDOP:
            break;
        case Cmd_MOV_CLDMP:
            this->SendLPCommand_MOV_CLDMP();
            break;
        case Cmd_MOV_CLMPO:
            break;
        case Cmd_MOV_CULOD:
            this->SendLPCommand_MOV_CULOD();
            break;
        case Cmd_MOV_CULDK:
            break;
        case Cmd_MOV_CUDCL:
            break;
        case Cmd_MOV_CUDNC:
            break;
        case Cmd_MOV_CULYD:
            this->SendLPCommand_MOV_CULYD();
            break;
        case Cmd_MOV_CULFC:
            break;
        case Cmd_MOV_CUDMP:
            break;
        case Cmd_MOV_CUMDK:
            break;
        case Cmd_MOV_CUMFC:
            break;
        case Cmd_MOV_MAPD1:
            break;
        case Cmd_MOV_MAPD2:
            break;
        case Cmd_MOV_MAPDO:
            break;
        case Cmd_MOV_REMAP:
            break;
        case Cmd_MOV_PODOP:
            break;
        case Cmd_MOV_PODCL:
            this->SendLPCommand_MOV_PODCL();
            break;
        case Cmd_MOV_VACON:
            break;
        case Cmd_MOV_VACOF:
            break;
        case Cmd_MOV_DOROP:
            break;
        case Cmd_MOV_DORCL:
            break;
        case Cmd_MOV_MAPOP:
            break;
        case Cmd_MOV_MAPCL:
            break;
        case Cmd_MOV_ZMPUP:
            break;
        case Cmd_MOV_ZMPDW:
            break;
        case Cmd_MOV_ZDRUP:
            break;
        case Cmd_MOV_ZDRDW:
            break;
        case Cmd_MOV_ZDRMP:
            break;
        case Cmd_MOV_ZMDMP:
            break;
        case Cmd_MOV_ZORGN:
            break;
        case Cmd_MOV_ZMPST:
            break;
        case Cmd_MOV_ZMPED:
            break;
        case Cmd_MOV_MSTON:
            break;
        case Cmd_MOV_MSTOF:
            break;
        case Cmd_MOV_YWAIT:
            break;
        case Cmd_MOV_YDOOR:
            this->SendLPCommand_MOV_YDOOR();
            break;
        case Cmd_MOV_DORBK:
            break;
        case Cmd_MOV_DORFW:
            break;
        case Cmd_MOV_RETRY:
            break;
        case Cmd_MOV_STOP_:
            break;
        case Cmd_MOV_PAUSE:
            break;
        case Cmd_MOV_ABORT:
            break;
        case Cmd_MOV_RESUM:
            break;
        case Cmd_MOV_N2STA:
            break;
        case Cmd_MOV_N2STP:
            break;
        case Cmd_MOV_N2OPN:
            break;
        case Cmd_MOV_N2CLO:
            break;
        case Cmd_MOV_NZLUP:
            break;
        case Cmd_MOV_NZLDW:
            break;
        case Cmd_MOV_N2FPR:
            break;
        case Cmd_MOV_N2RPR:
            break;
        case Cmd_MOV_N2OP1:
            break;
        case Cmd_MOV_N2OP2:
            break;
        case Cmd_MOV_N2OP3:
            break;
        case Cmd_MOV_N2CL1:
            break;
        case Cmd_MOV_N2CL2:
            break;
        case Cmd_MOV_N2CL3:
            break;
        default:
            break;
        }
    }

}

bool CLoadPortComm::RecvChecksumCalculator(QByteArray data, int length)
{
    const char* tempData = data.constData();
    bool result = true;
    int sum = 0;
    QString chkSum;
    for (int i = 1; i < length - 3; i++) {
        sum += (int)tempData[i];
    }
    chkSum.sprintf("%3X", sum);
    chkSum = chkSum.right(2);
    char char1Sum = (char)chkSum.at(0).toLatin1();
    char char2Sum = (char)chkSum.at(1).toLatin1();
    if(char1Sum != tempData[length - 3] || char2Sum != tempData[length - 2])
    {
        result = false;
    }
    return result;
}

bool CLoadPortComm::SendChecksumCalculator(QString data, char &CSH, char &CSI)
{
    bool r = true;
    QString chkSum;
    int length = data.length();
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += (int)data.at(i).toLatin1();
    }
    sum += 0x0E;
    chkSum.sprintf("%3X", sum);
    chkSum = chkSum.right(2);
    qDebug() << "Send Sum: " + chkSum;
    CSH = chkSum.at(0).toLatin1();
    CSI = chkSum.at(1).toLatin1();
    return r;
}

bool CLoadPortComm::MakeCommandString(int CmdCode, char *CommandLine, bool retry)
{
    bool r = true;
    char StartHeader[2] = {0};
    char checksum[3] = {0};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    char cmd[11] = {0};
    char checksumRange[20] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;
    switch(CmdCode) {
    case Cmd_SET_RESET:
        if (!retry) {
            sprintf_s(cmd, "ACK:STATE/A0100110001100000110;");
        } else {
            sprintf_s(cmd, "RST:RESET;");
        }
        break;
    case Cmd_SET_INITL:
        if (!retry) {
            sprintf_s(cmd, "SET:INITL;");
        } else {
            sprintf_s(cmd, "RST:INITL;");
        }
        break;
    case Cmd_SET_LPLOD:
        if (!retry) {
            sprintf_s(cmd, "SET:LPLOD;");
        } else {
            sprintf_s(cmd, "RST:LPLOD;");
        }
        break;
    case Cmd_SET_BLLOD:
        if (!retry) {
            sprintf_s(cmd, "SET:BLLOD;");
        } else {
            sprintf_s(cmd, "RST:BLLOD;");
        }
        break;
    case Cmd_SET_LOLOD:
        if (!retry) {
            sprintf_s(cmd, "SET:LOLOD;");
        } else {
            sprintf_s(cmd, "RST:LOLOD;");
        }
        break;
    case Cmd_SET_LPULD:
        if (!retry) {
            sprintf_s(cmd, "SET:LPULD;");
        } else {
            sprintf_s(cmd, "RST:LPULD;");
        }
        break;
    case Cmd_SET_BLULD:
        if (!retry) {
            sprintf_s(cmd, "SET:BLULD;");
        } else {
            sprintf_s(cmd, "RST:BLULD;");
        }
        break;
    case Cmd_SET_LOULD:
        if (!retry) {
            sprintf_s(cmd, "SET:LOULD;");
        } else {
            sprintf_s(cmd, "RST:LOULD;");
        }
        break;
    case Cmd_SET_LPMSW:
        if (!retry) {
            sprintf_s(cmd, "SET:LPMSW;");
        } else {
            sprintf_s(cmd, "RST:LPMSW;");
        }
        break;
    case Cmd_SET_BLMSW:
        if (!retry) {
            sprintf_s(cmd, "SET:BLMSW;");
        } else {
            sprintf_s(cmd, "RST:BLMSW;");
        }
        break;
    case Cmd_SET_LOMSW:
        if (!retry) {
            sprintf_s(cmd, "SET:LOMSW;");
        } else {
            sprintf_s(cmd, "RST:LOMSW;");
        }
        break;
    case Cmd_SET_LPCON:
        if (!retry) {
            sprintf_s(cmd, "SET:LPCON;");
        } else {
            sprintf_s(cmd, "RST:LPCON;");
        }
        break;
    case Cmd_SET_BLCON:
        if (!retry) {
            sprintf_s(cmd, "SET:BLCON;");
        } else {
            sprintf_s(cmd, "RST:BLCON;");
        }
        break;
    case Cmd_SET_LOCON:
        if (!retry) {
            sprintf_s(cmd, "SET:LOCON;");
        } else {
            sprintf_s(cmd, "RST:LOCON;");
        }
        break;
    case Cmd_SET_LPCST:
        if (!retry) {
            sprintf_s(cmd, "SET:LPCST;");
        } else {
            sprintf_s(cmd, "RST:LPCST;");
        }
        break;
    case Cmd_SET_BLCST:
        if (!retry) {
            sprintf_s(cmd, "SET:BLCST;");
        } else {
            sprintf_s(cmd, "RST:BLCST;");
        }
        break;
    case Cmd_SET_LOCST:
        if (!retry) {
            sprintf_s(cmd, "SET:LOCST;");
        } else {
            sprintf_s(cmd, "RST:LOCST;");
        }
        break;
    case Cmd_SET_LON07:
        if (!retry) {
            sprintf_s(cmd, "SET:LON07;");
        } else {
            sprintf_s(cmd, "RST:LON07;");
        }
        break;
    case Cmd_SET_LBL07:
        if (!retry) {
            sprintf_s(cmd, "SET:LBL07;");
        } else {
            sprintf_s(cmd, "RST:LBL07;");
        }
        break;
    case Cmd_SET_LOF07:
        if (!retry) {
            sprintf_s(cmd, "SET:LOF07;");
        } else {
            sprintf_s(cmd, "RST:LOF07;");
        }
        break;
    case Cmd_SET_LON08:
        if (!retry) {
            sprintf_s(cmd, "SET:LON08;");
        } else {
            sprintf_s(cmd, "RST:LON08;");
        }
        break;
    case Cmd_SET_LBL08:
        if (!retry) {
            sprintf_s(cmd, "SET:LBL08;");
        } else {
            sprintf_s(cmd, "RST:LBL08;");
        }
        break;
    case Cmd_SET_LOF08:
        if (!retry) {
            sprintf_s(cmd, "SET:LOF08;");
        } else {
            sprintf_s(cmd, "RST:LOF08;");
        }
        break;
    case Cmd_SET_LPLD1:
        if (!retry) {
            sprintf_s(cmd, "SET:LPLD1;");
        } else {
            sprintf_s(cmd, "RST:LPLD1;");
        }
        break;
    case Cmd_SET_BLLD1:
        if (!retry) {
            sprintf_s(cmd, "SET:BLLD1;");
        } else {
            sprintf_s(cmd, "RST:BLLD1;");
        }
        break;
    case Cmd_SET_LOLD1:
        if (!retry) {
            sprintf_s(cmd, "SET:LOLD1;");
        } else {
            sprintf_s(cmd, "RST:LOLD1;");
        }
        break;
    case Cmd_SET_LPLD2:
        if (!retry) {
            sprintf_s(cmd, "SET:LPLD2;");
        } else {
            sprintf_s(cmd, "RST:LPLD2;");
        }
        break;
    case Cmd_SET_BLLD2:
        if (!retry) {
            sprintf_s(cmd, "SET:BLLD2;");
        } else {
            sprintf_s(cmd, "RST:BLLD2;");
        }
        break;
    case Cmd_SET_LOLD2:
        if (!retry) {
            sprintf_s(cmd, "SET:LOLD2;");
        } else {
            sprintf_s(cmd, "RST:LOLD2;");
        }
        break;
    case Cmd_SET_LPLD3:
        if (!retry) {
            sprintf_s(cmd, "SET:LPLD3;");
        } else {
            sprintf_s(cmd, "RST:LPLD3;");
        }
        break;
    case Cmd_SET_BLLD3:
        if (!retry) {
            sprintf_s(cmd, "SET:BLLD3;");
        } else {
            sprintf_s(cmd, "RST:BLLD3;");
        }
        break;
    case Cmd_SET_LOLD3:
        if (!retry) {
            sprintf_s(cmd, "SET:LOLD3;");
        } else {
            sprintf_s(cmd, "RST:LOLD3;");
        }
        break;
    case Cmd_SET_LPLD4:
        if (!retry) {
            sprintf_s(cmd, "SET:LPLD4;");
        } else {
            sprintf_s(cmd, "RST:LPLD4;");
        }
        break;
    case Cmd_SET_BLLD4:
        if (!retry) {
            sprintf_s(cmd, "SET:BLLD4;");
        } else {
            sprintf_s(cmd, "RST:BLLD4;");
        }
        break;
    case Cmd_SET_LOLD4:
        if (!retry) {
            sprintf_s(cmd, "SET:LOLD4;");
        } else {
            sprintf_s(cmd, "RST:LOLD4;");
        }
        break;
    case Cmd_SET_SAVE1:
        if (!retry) {
            sprintf_s(cmd, "SET:SAVE1;");
        } else {
            sprintf_s(cmd, "RST:SAVE1;");
        }
        break;
    case Cmd_MOD_ONMGV:
        sprintf_s(cmd, "MOD:ONMGV;");
        break;
    case Cmd_MOD_MENTE:
        sprintf_s(cmd, "MOD:MENTE;");
        break;
    case Cmd_MOD_TEACH:
        sprintf_s(cmd, "MOD:TEACH;");
        break;
    case Cmd_GET_STATE:
        sprintf_s(cmd, "GET:STATE;");
        break;
    case Cmd_GET_VERSN:
        sprintf_s(cmd, "GET:VERSN;");
        break;
    case Cmd_GET_LEDST:
        sprintf_s(cmd, "GET:LEDST;");
        break;
    case Cmd_GET_MAPDT:
        sprintf_s(cmd, "GET:MAPDT;");
        break;
    case Cmd_GET_MAPRD:
        sprintf_s(cmd, "GET:MAPRD;");
        break;
    case Cmd_GET_WFCNT:
        sprintf_s(cmd, "GET:WFCNT;");
        break;
    case Cmd_MOV_ORGSH:
        if (!retry) {
            sprintf_s(cmd, "MOV:ORGSH;");
        } else {
            sprintf_s(cmd, "RMV:ORGSH;");
        }
        break;
    case Cmd_MOV_ABORG:
        if (!retry) {
            sprintf_s(cmd, "MOV:ABORG;");
        } else {
            sprintf_s(cmd, "RMV:ABORG;");
        }
        break;
    case Cmd_MOV_CLOAD:
        if (!retry) {
            sprintf_s(cmd, "MOV:CLOAD;");
        } else {
            sprintf_s(cmd, "RMV:CLOAD;");
        }
        break;
    case Cmd_MOV_CLDDK:
        if (!retry) {
            sprintf_s(cmd, "MOV:CLDDK;");
        } else {
            sprintf_s(cmd, "RMV:CLDDK;");
        }
        break;
    case Cmd_MOV_CLDYD:
        if (!retry) {
            sprintf_s(cmd, "MOV:CLDYD;");
        } else {
            sprintf_s(cmd, "RMV:CLDYD;");
        }
        break;
    case Cmd_MOV_CLDOP:
        if (!retry) {
            sprintf_s(cmd, "MOV:CLDOP;");
        } else {
            sprintf_s(cmd, "RMV:CLDOP;");
        }
        break;
    case Cmd_MOV_CLDMP:
        if (!retry) {
            sprintf_s(cmd, "MOV:CLDMP;");
        } else {
            sprintf_s(cmd, "RMV:CLDMP;");
        }
        break;
    case Cmd_MOV_CLMPO:
        if (!retry) {
            sprintf_s(cmd, "MOV:CLMPO;");
        } else {
            sprintf_s(cmd, "RMV:CLMPO;");
        }
        break;
    case Cmd_MOV_CULOD:
        if (!retry) {
            sprintf_s(cmd, "MOV:CULOD;");
        } else {
            sprintf_s(cmd, "RMV:CULOD;");
        }
        break;
    case Cmd_MOV_CULDK:
        if (!retry) {
            sprintf_s(cmd, "MOV:CULDK;");
        } else {
            sprintf_s(cmd, "RMV:CULDK;");
        }
        break;
    case Cmd_MOV_CUDCL:
        if (!retry) {
            sprintf_s(cmd, "MOV:CUDCL;");
        } else {
            sprintf_s(cmd, "RMV:CUDCL;");
        }
        break;
    case Cmd_MOV_CUDNC:
        if (!retry) {
            sprintf_s(cmd, "MOV:CUDNC;");
        } else {
            sprintf_s(cmd, "RMV:CUDNC;");
        }
        break;
    case Cmd_MOV_CULYD:
        if (!retry) {
            sprintf_s(cmd, "MOV:CULYD;");
        } else {
            sprintf_s(cmd, "RMV:CULYD;");
        }
        break;
    case Cmd_MOV_CULFC:
        if (!retry) {
            sprintf_s(cmd, "MOV:CULFC;");
        } else {
            sprintf_s(cmd, "RMV:CULFC;");
        }
        break;
    case Cmd_MOV_CUDMP:
        if (!retry) {
            sprintf_s(cmd, "MOV:CUDMP;");
        } else {
            sprintf_s(cmd, "RMV:CUDMP;");
        }
        break;
    case Cmd_MOV_CUMDK:
        if (!retry) {
            sprintf_s(cmd, "MOV:CUMDK;");
        } else {
            sprintf_s(cmd, "RMV:CUMDK;");
        }
        break;
    case Cmd_MOV_CUMFC:
        if (!retry) {
            sprintf_s(cmd, "MOV:CUMFC;");
        } else {
            sprintf_s(cmd, "RMV:CUMFC;");
        }
        break;
    case Cmd_MOV_MAPD1:
        if (!retry) {
            sprintf_s(cmd, "MOV:MAPD1;");
        } else {
            sprintf_s(cmd, "RMV:MAPD1;");
        }
        break;
    case Cmd_MOV_MAPD2:
        if (!retry) {
            sprintf_s(cmd, "MOV:MAPD2;");
        } else {
            sprintf_s(cmd, "RMV:MAPD2;");
        }
        break;
    case Cmd_MOV_MAPDO:
        if (!retry) {
            sprintf_s(cmd, "MOV:MAPDO;");
        } else {
            sprintf_s(cmd, "RMV:MAPDO;");
        }
        break;
    case Cmd_MOV_REMAP:
        if (!retry) {
            sprintf_s(cmd, "MOV:REMAP;");
        } else {
            sprintf_s(cmd, "RMV:REMAP;");
        }
        break;
    case Cmd_MOV_PODOP:
        if (!retry) {
            sprintf_s(cmd, "MOV:PODOP;");
        } else {
            sprintf_s(cmd, "RMV:PODOP;");
        }
        break;
    case Cmd_MOV_PODCL:
        if (!retry) {
            sprintf_s(cmd, "MOV:PODCL;");
        } else {
            sprintf_s(cmd, "RMV:PODCL;");
        }
        break;
    case Cmd_MOV_VACON:
        if (!retry) {
            sprintf_s(cmd, "MOV:VACON;");
        } else {
            sprintf_s(cmd, "RMV:VACON;");
        }
        break;
    case Cmd_MOV_VACOF:
        if (!retry) {
            sprintf_s(cmd, "MOV:VACOF;");
        } else {
            sprintf_s(cmd, "RMV:VACOF;");
        }
        break;
    case Cmd_MOV_DOROP:
        if (!retry) {
            sprintf_s(cmd, "MOV:DOROP;");
        } else {
            sprintf_s(cmd, "RMV:DOROP;");
        }
        break;
    case Cmd_MOV_DORCL:
        if (!retry) {
            sprintf_s(cmd, "MOV:DORCL;");
        } else {
            sprintf_s(cmd, "RMV:DORCL;");
        }
        break;
    case Cmd_MOV_MAPOP:
        if (!retry) {
            sprintf_s(cmd, "MOV:MAPOP;");
        } else {
            sprintf_s(cmd, "RMV:MAPOP;");
        }
        break;
    case Cmd_MOV_MAPCL:
        if (!retry) {
            sprintf_s(cmd, "MOV:MAPCL;");
        } else {
            sprintf_s(cmd, "RMV:MAPCL;");
        }
        break;
    case Cmd_MOV_ZMPUP:
        if (!retry) {
            sprintf_s(cmd, "MOV:ZMPUP;");
        } else {
            sprintf_s(cmd, "RMV:ZMPUP;");
        }
        break;
    case Cmd_MOV_ZMPDW:
        if (!retry) {
            sprintf_s(cmd, "MOV:ZMPDW;");
        } else {
            sprintf_s(cmd, "RMV:ZMPDW;");
        }
        break;
    case Cmd_MOV_ZDRUP:
        if (!retry) {
            sprintf_s(cmd, "MOV:ZDRUP;");
        } else {
            sprintf_s(cmd, "RMV:ZDRUP;");
        }
        break;
    case Cmd_MOV_ZDRDW:
        if (!retry) {
            sprintf_s(cmd, "MOV:ZDRDW;");
        } else {
            sprintf_s(cmd, "RMV:ZDRDW;");
        }
        break;
    case Cmd_MOV_ZDRMP:
        if (!retry) {
            sprintf_s(cmd, "MOV:ZDRMP;");
        } else {
            sprintf_s(cmd, "RMV:ZDRMP;");
        }
        break;
    case Cmd_MOV_ZMDMP:
        if (!retry) {
            sprintf_s(cmd, "MOV:ZMDMP;");
        } else {
            sprintf_s(cmd, "RMV:ZMDMP;");
        }
        break;
    case Cmd_MOV_ZORGN:
        if (!retry) {
            sprintf_s(cmd, "MOV:ZORGN;");
        } else {
            sprintf_s(cmd, "RMV:ZORGN;");
        }
        break;
    case Cmd_MOV_ZMPST:
        if (!retry) {
            sprintf_s(cmd, "MOV:ZMPST;");
        } else {
            sprintf_s(cmd, "RMV:ZMPST;");
        }
        break;
    case Cmd_MOV_YWAIT:
        if (!retry) {
            sprintf_s(cmd, "MOV:YWAIT;");
        } else {
            sprintf_s(cmd, "RMV:YWAIT;");
        }
        break;
    case Cmd_MOV_YDOOR:
        if (!retry) {
            sprintf_s(cmd, "MOV:YDOOR;");
        } else {
            sprintf_s(cmd, "RMV:YDOOR;");
        }
        break;
    case Cmd_MOV_DORBK:
        if (!retry) {
            sprintf_s(cmd, "MOV:DORBK;");
        } else {
            sprintf_s(cmd, "RMV:DORBK;");
        }
        break;
    case Cmd_MOV_DORFW:
        if (!retry) {
            sprintf_s(cmd, "MOV:DORFW;");
        } else {
            sprintf_s(cmd, "RMV:DORFW;");
        }
        break;
    case Cmd_MOV_RETRY:
        sprintf_s(cmd, "MOV:RETRY;");
        break;
    case Cmd_MOV_STOP_:
        sprintf_s(cmd, "MOV:STOP_;");
        break;
    case Cmd_MOV_PAUSE:
        sprintf_s(cmd, "MOV:PAUSE;");
        break;
    case Cmd_MOV_ABORT:
        sprintf_s(cmd, "MOV:ABORT;");
        break;
    case Cmd_MOV_RESUM:
        sprintf_s(cmd, "MOV:RESUM;");
        break;
    }
    // Build checksum calculated string
    strcat_s(checksumRange, Address);
    strcat_s(checksumRange, cmd);
    QString strChecksum(checksumRange);
    // Calculate check sum
    SendChecksumCalculator(strChecksum, checksum[0], checksum[1]);
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < 10; i++) {
        CommandLine[i+5] = cmd[i];
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];
    // CommandLine[18] = Terminate[1];
    return r;
}

bool CLoadPortComm::SendLPCommand_SET_RESET()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:RESET;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:RESET;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_SET_BLLOD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:BLLOD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:BLLOD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_SET_BLULD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:BLULD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:BLULD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_SET_LPULD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:LPULD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:LPULD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_SET_LOLOD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:LOLOD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:LOLOD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_SET_LPLOD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:LPLOD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:LPLOD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_SET_LOULD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:LOULD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:LOULD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_GET_VERSN()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:VERSN/SDK_VER7-1-4;";

    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[28] = checksum[0];
    CommandLine[29] = checksum[1];
    CommandLine[30] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 31);
    qDebug() << br.size();
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);
    return ret;
}

bool CLoadPortComm::SendLPCommand_GET_STATE()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {0};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    char checksumRange[35] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:STATE/A0100110001100000110;";

    // Build checksum calculated string
    strcat_s(checksumRange, length);
    strcat_s(checksumRange, Address);
    strcat_s(checksumRange, cmd.toStdString().c_str());
    QString strChecksum(checksumRange);
    // Calculate check sum
    SendChecksumCalculator(strChecksum, checksum[0], checksum[1]);

    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[36] = checksum[0];
    CommandLine[37] = checksum[1];
    CommandLine[38] = Terminate[0];

    // Send command to Load port
//    QByteArray::fromRawData(CommandLine, 39)
//    QByteArray test("\x01\x00\x0E00ACK:STATE");
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 39);
    qDebug() << br.size();
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);
    return ret;
}

bool CLoadPortComm::SendLPCommand_GET_MAPRD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:MAPRD/1010101010101010101010101;";

    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[41] = checksum[0];
    CommandLine[42] = checksum[1];
    CommandLine[43] = Terminate[0];

    // Send command to Load port
//    QByteArray::fromRawData(CommandLine, 39)
//    QByteArray test("\x01\x00\x0E00ACK:STATE");
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 44);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);
    return ret;
}

bool CLoadPortComm::SendLPCommand_MOV_ABORG()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:ABORG;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:ABORG;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_MOV_PODCL()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:PODCL;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:PODCL;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_MOV_YDOOR()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:YDOOR;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:YDOOR;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_MOV_CULYD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:CULYD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:CULYD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_MOV_CLDMP()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:CLDMP;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:CLDMP;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}

bool CLoadPortComm::SendLPCommand_MOV_LULOD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:LULOD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:LULOD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

        return ret;
}

bool CLoadPortComm::SendLPCommand_MOV_CULOD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:CULOD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:CULOD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

        return ret;
}

bool CLoadPortComm::SendLPCommand_MOV_CLOAD()
{
    bool 	ret = true;
    char 	CommandLine[1000] = {0};
    // Clear command buffer
    memset(CommandLine, 0, sizeof(CommandLine));
    // Make command string
    char StartHeader[2] = {0};
    char checksum[3] = {'6', '6', '6'};
    char length[3] = {0};
    char Address[3] = {0};
    char Terminate[3] = {0};
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    QString cmd = "ACK:CLOAD;";
    // Build sending command
    CommandLine[0] = StartHeader[0];
    CommandLine[1] = length[0];
    CommandLine[2] = length[1];
    CommandLine[3] = Address[0];
    CommandLine[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine[15] = checksum[0];
    CommandLine[16] = checksum[1];
    CommandLine[17] = Terminate[0];

    // Send command to Load port
    QByteArray br = QByteArray(reinterpret_cast<char*>(CommandLine), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br);


    char 	CommandLine2[1000] = {0};
    // Clear command buffer
    memset(CommandLine2, 0, sizeof(CommandLine2));
    // Make command string
    StartHeader[0] = 0x01;
    length[0] = 0x00;
    length[1] = 0x0E;	// Send command of TDK-A have length of 14 bytes
    Address[0] = '0';
    Address[1] = '0';
    Terminate[0] = 0x03;
    Terminate[1] = 0x00;

    cmd = "INF:CLOAD;";
    // Build sending command
    CommandLine2[0] = StartHeader[0];
    CommandLine2[1] = length[0];
    CommandLine2[2] = length[1];
    CommandLine2[3] = Address[0];
    CommandLine2[4] = Address[1];
    for (int i = 0; i < cmd.length(); i++) {
        CommandLine2[i+5] = (char)cmd[i].toLatin1();
    }
    CommandLine2[15] = checksum[0];
    CommandLine2[16] = checksum[1];
    CommandLine2[17] = Terminate[0];

    // Send command to Load port
    QByteArray br2 = QByteArray(reinterpret_cast<char*>(CommandLine2), 18);
    emit addOperationLog(cmd, "LP->App");
    emit SendData(br2);

    return ret;
}
