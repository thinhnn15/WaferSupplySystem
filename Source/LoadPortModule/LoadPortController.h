#ifndef LOADPORTCONTROLLER_H
#define LOADPORTCONTROLLER_H

#include <QObject>
#include "LoadPortComm.h"

class CLoadPortController : public QObject
{
    Q_OBJECT
public:
    CLoadPortController(CLogModel* log, QObject* parent = 0);
    void SetSettingData(CSettingData* data);
    bool OpenSerialCom();

signals:
    void parserCommand(QByteArray);
    void updateLPLog(QString, QString);

public slots:
    void OnHandleReceiveMsg();
    void OnLPLog(QString msg, QString dir);

private:
    QThread*            m_pSendCmdThread;
    CLoadPortComm*      m_pLPComm;
    QQueue<QByteArray>  m_queueReceiveMsg;
};

#endif // LOADPORTCONTROLLER_H
