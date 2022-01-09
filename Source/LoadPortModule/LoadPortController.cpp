#include "LoadPortController.h"

CLoadPortController::CLoadPortController(CLogModel *log, QObject *parent)
    :QObject(parent)
{
    m_pLPComm = new CLoadPortComm(log);
    m_pSendCmdThread    = new QThread();
    m_pLPComm->moveToThread(m_pSendCmdThread);
    connect(m_pLPComm, SIGNAL(destroyed(QObject*)), m_pSendCmdThread, SLOT(quit()));
    connect(m_pSendCmdThread, SIGNAL(finished()), m_pSendCmdThread, SLOT(deleteLater()));
    QObject::connect(this, SIGNAL(parserCommand(QByteArray)), m_pLPComm, SLOT(OnParserCommand(QByteArray)));
    QObject::connect(m_pLPComm, SIGNAL(handleLPMsg()), this, SLOT(OnHandleReceiveMsg()));
    QObject::connect(m_pLPComm, SIGNAL(addOperationLog(QString, QString)), this, SLOT(OnLPLog(QString, QString)));
    m_pSendCmdThread->start();
    m_pLPComm->SetQueueRMessage(&m_queueReceiveMsg);
}

void CLoadPortController::SetSettingData(CSettingData *data)
{
    m_pLPComm->SetSettingData(data);
}

bool CLoadPortController::OpenSerialCom()
{
    return m_pLPComm->OpenComPort();
}

void CLoadPortController::OnHandleReceiveMsg()
{
    while(m_queueReceiveMsg.size() > 0){
        QByteArray msg = m_queueReceiveMsg.front();
        m_queueReceiveMsg.pop_front();
        // Handle the receive message
        // emit the signal to the Manipulator thread
        emit parserCommand(msg);
    }
}

void CLoadPortController::OnLPLog(QString msg, QString dir)
{
    updateLPLog(msg, dir);
}
