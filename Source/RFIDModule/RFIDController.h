#ifndef RFIDCONTROLLER_H
#define RFIDCONTROLLER_H

#include <QObject>
#include "RFIDComm.h"

class CRFIDController : public QObject
{
    Q_OBJECT
public:
    CRFIDController(CLogModel* log, QObject* parent = 0);
    void SetSettingData(CSettingData* data);
    bool OpenSerialCom();
signals:
    void parserCommand(QByteArray);
    void updateRFIDLog(QString, QString);

public slots:
    void OnHandleReceiveMsg();
    void OnRFIDLog(QString msg, QString dir);

private:
    QThread*            m_pSendCmdThread;
    CRFIDComm*          m_pRFIDComm;
    QQueue<QByteArray>  m_queueReceiveMsg;
};

#endif // RFIDCONTROLLER_H
