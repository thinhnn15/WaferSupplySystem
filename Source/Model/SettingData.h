#ifndef SETTINGDATA_H
#define SETTINGDATA_H

#include <QObject>

class CSettingData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int lanPortNo READ lanPortNo WRITE setLanPortNo NOTIFY lanPortNoChanged)
    Q_PROPERTY(int lpComName READ lpComName WRITE setLpComName NOTIFY lpComNameChanged)
    Q_PROPERTY(int lpBaudRate READ lpBaudRate WRITE setLpBaudRate NOTIFY lpBaudRateChanged)
    Q_PROPERTY(int lpDataSize READ lpDataSize WRITE setLpDataSize NOTIFY lpDataSizeChanged)
    Q_PROPERTY(int lpParity READ lpParity WRITE setLpParity NOTIFY lpParityChanged)
    Q_PROPERTY(int rfidComName READ rfidComName WRITE setRfidComName NOTIFY rfidComNameChanged)
    Q_PROPERTY(int rfidBaudRate READ rfidBaudRate WRITE setRfidBaudRate NOTIFY rfidBaudRateChanged)
    Q_PROPERTY(int rfidDataSize READ rfidDataSize WRITE setRfidDataSize NOTIFY rfidDataSizeChanged)
    Q_PROPERTY(int rfidParity READ rfidParity WRITE setRfidParity NOTIFY rfidParityChanged)
    Q_PROPERTY(int language READ language WRITE setLanguage NOTIFY languageChanged)
    Q_PROPERTY(int lpResponseMode READ lpResponseMode WRITE setLpResponseMode NOTIFY lpResponseModeChanged)
    Q_PROPERTY(int lpTerminateMode READ lpTerminateMode WRITE setLpTerminateMode NOTIFY lpTerminateModeChanged)
    Q_PROPERTY(int efemType READ efemType WRITE setEfemType NOTIFY efemTypeChanged)
    Q_PROPERTY(int alignerType READ alignerType WRITE setAlignerType NOTIFY alignerTypeChanged)

private:
    int m_lanPortNo;
    int m_lpComName;
    int m_lpBaudRate;
    int m_lpDataSize;
    int m_lpParity;
    int m_rfidComName;
    int m_rfidBaudRate;
    int m_rfidDataSize;
    int m_rfidParity;
    int m_language;
    int m_lpResponseMode;

    int m_lpTerminateMode;

    int m_efemType;

    int m_alignerType;

public:
    CSettingData(QObject* parent = 0);
    int lanPortNo() const
    {
        return m_lanPortNo;
    }
    int lpComName() const
    {
        return m_lpComName;
    }

    int lpBaudRate() const
    {
        return m_lpBaudRate;
    }

    int lpDataSize() const
    {
        return m_lpDataSize;
    }

    int lpParity() const
    {
        return m_lpParity;
    }

    int rfidComName() const
    {
        return m_rfidComName;
    }

    int rfidBaudRate() const
    {
        return m_rfidBaudRate;
    }

    int rfidDataSize() const
    {
        return m_rfidDataSize;
    }

    int rfidParity() const
    {
        return m_rfidParity;
    }

    int language() const
    {
        return m_language;
    }

    int lpResponseMode() const
    {
        return m_lpResponseMode;
    }

    int lpTerminateMode() const
    {
        return m_lpTerminateMode;
    }

    int efemType() const
    {
        return m_efemType;
    }

    int alignerType() const
    {
        return m_alignerType;
    }

public slots:
    void setLanPortNo(int lanPortNo)
    {
        if (m_lanPortNo == lanPortNo)
            return;

        m_lanPortNo = lanPortNo;
        emit lanPortNoChanged(m_lanPortNo);
    }
    void setLpComName(int lpComName)
    {
        if (m_lpComName == lpComName)
            return;

        m_lpComName = lpComName;
        emit lpComNameChanged(m_lpComName);
    }

    void setLpBaudRate(int lpBaudRate)
    {
        if (m_lpBaudRate == lpBaudRate)
            return;

        m_lpBaudRate = lpBaudRate;
        emit lpBaudRateChanged(m_lpBaudRate);
    }

    void setLpDataSize(int lpDataSize)
    {
        if (m_lpDataSize == lpDataSize)
            return;

        m_lpDataSize = lpDataSize;
        emit lpDataSizeChanged(m_lpDataSize);
    }

    void setLpParity(int lpParity)
    {
        if (m_lpParity == lpParity)
            return;

        m_lpParity = lpParity;
        emit lpParityChanged(m_lpParity);
    }

    void setRfidComName(int rfidComName)
    {
        if (m_rfidComName == rfidComName)
            return;

        m_rfidComName = rfidComName;
        emit rfidComNameChanged(m_rfidComName);
    }

    void setRfidBaudRate(int rfidBaudRate)
    {
        if (m_rfidBaudRate == rfidBaudRate)
            return;

        m_rfidBaudRate = rfidBaudRate;
        emit rfidBaudRateChanged(m_rfidBaudRate);
    }

    void setRfidDataSize(int rfidDataSize)
    {
        if (m_rfidDataSize == rfidDataSize)
            return;

        m_rfidDataSize = rfidDataSize;
        emit rfidDataSizeChanged(m_rfidDataSize);
    }

    void setRfidParity(int rfidParity)
    {
        if (m_rfidParity == rfidParity)
            return;

        m_rfidParity = rfidParity;
        emit rfidParityChanged(m_rfidParity);
    }

    void setLanguage(int language)
    {
        if (m_language == language)
            return;

        m_language = language;
        emit languageChanged(m_language);
    }

    void setLpResponseMode(int lpResponseMode)
    {
        if (m_lpResponseMode == lpResponseMode)
            return;

        m_lpResponseMode = lpResponseMode;
        emit lpResponseModeChanged(m_lpResponseMode);
    }

    void setLpTerminateMode(int lpTerminateMode)
    {
        if (m_lpTerminateMode == lpTerminateMode)
            return;

        m_lpTerminateMode = lpTerminateMode;
        emit lpTerminateModeChanged(m_lpTerminateMode);
    }

    void setEfemType(int efemType)
    {
        if (m_efemType == efemType)
            return;

        m_efemType = efemType;
        emit efemTypeChanged(m_efemType);
    }

    void setAlignerType(int alignerType)
    {
        if (m_alignerType == alignerType)
            return;

        m_alignerType = alignerType;
        emit alignerTypeChanged(m_alignerType);
    }

signals:
    void lanPortNoChanged(int lanPortNo);
    void lpComNameChanged(int lpComName);
    void lpBaudRateChanged(int lpBaudRate);
    void lpDataSizeChanged(int lpDataSize);
    void lpParityChanged(int lpParity);
    void rfidComNameChanged(int rfidComName);
    void rfidBaudRateChanged(int rfidBaudRate);
    void rfidDataSizeChanged(int rfidDataSize);
    void rfidParityChanged(int rfidParity);
    void languageChanged(int language);
    void lpResponseModeChanged(int lpResponseMode);
    void lpTerminateModeChanged(int lpTerminateMode);
    void efemTypeChanged(int efemType);
    void alignerTypeChanged(int alignerType);
};

#endif // SETTINGDATA_H
