import QtQuick 2.4
import Enum 1.3
import "./Common"
import QtQuick.Controls 2.1

Rectangle {
    id: settingScreen
    width: 788
    height: 543
    color: "#e0e0e0"
    signal saveSettingData()
    property int language: settingData.language
    objectName: "settingScreen"
    radius: 5
    GroupBoxCustom {
        id: grRobotComm
        x: 14
        y: 21
        width: 247
        height: 72
        groupName: qsTr("Robot Communication Setting") + appTrans.emptyString
        CellText {
            id: labelRBPortNo
            x: 8
            y: 26
            width: 72
            height: 25
            content: qsTr("Port No") + appTrans.emptyString
        }

        TextEdit {
            id: txtRBPortNo
            x: 79
            y: 26
            width: 126
            height: 26
            content: settingData.lanPortNo
            isReadOnly: false
        }
    }

    GroupBoxCustom {
        id: grLPComm
        x: 14
        y: 114
        width: 247
        height: 163
        groupName: qsTr("Load Port Communication Setting") + appTrans.emptyString
        ComboBoxCustom {
            id: cbLPComNo
            x: 79
            y: 31
            width: 140
            height: 26
            models: ["COM1", "COM2", "COM3", "COM4", "COM5", "COM6", "COM7", "COM8", "COM9", "COM10",
                    "COM11", "COM12", "COM13", "COM14", "COM15", "COM16", "COM17", "COM18", "COM19", "COM20"]
            activeIndex: settingData.lpComName
        }

        CellText {
            id: labelLPComNo
            x: 8
            y: 31
            width: 72
            height: 25
            content: qsTr("Com No") + appTrans.emptyString
        }

        CellText {
            id: labelLPBaud
            x: 8
            y: 62
            width: 72
            height: 25
            content: qsTr("BaudRate") + appTrans.emptyString
        }

        CellText {
            id: labelLPSize
            x: 8
            y: 93
            width: 72
            height: 25
            content: qsTr("Data Size") + appTrans.emptyString
        }

        CellText {
            id: labelLPParity
            x: 8
            y: 124
            width: 72
            height: 25
            content: qsTr("Parity") + appTrans.emptyString
        }

        ComboBoxCustom {
            id: cbLPBaud
            x: 79
            y: 62
            width: 140
            height: 26
            models: ["4800", "9600", "14400", "19200", "38400"]
            activeIndex: settingData.lpBaudRate
        }

        ComboBoxCustom {
            id: cbLPDataSize
            x: 79
            y: 93
            width: 140
            height: 26
            models: ["7", "8"]
            activeIndex: settingData.lpDataSize
        }

        ComboBoxCustom {
            id: cbLPParity
            x: 79
            y: 124
            width: 140
            height: 26
            models: ["None", "Yes"]
            activeIndex: settingData.lpParity
        }

    }

    GroupBoxCustom {
        id: grRFIDComm
        x: 313
        y: 115
        width: 247
        height: 163
        groupName: qsTr("RFID Communication Setting") + appTrans.emptyString
        CellText {
            id: labelRFIDComNo
            x: 8
            y: 31
            width: 72
            height: 25
            content: qsTr("Com No") + appTrans.emptyString
        }

        CellText {
            id: labelRFIDBaud
            x: 8
            y: 62
            width: 72
            height: 25
            content: qsTr("BaudRate") + appTrans.emptyString
        }

        CellText {
            id: labelRFIDSize
            x: 8
            y: 93
            width: 72
            height: 25
            content: qsTr("Data Size") + appTrans.emptyString
        }

        CellText {
            id: labelRFIDParity
            x: 8
            y: 124
            width: 72
            height: 25
            content: qsTr("Parity") + appTrans.emptyString
        }

        ComboBoxCustom {
            id: cbRFIDComNo
            x: 79
            y: 31
            width: 140
            height: 26
            models: ["COM1", "COM2", "COM3", "COM4", "COM5", "COM6", "COM7", "COM8", "COM9", "COM10",
                    "COM11", "COM12", "COM13", "COM14", "COM15", "COM16", "COM17", "COM18", "COM19", "COM20"]
            activeIndex: settingData.rfidComName
        }

        ComboBoxCustom {
            id: cbRFIDBaud
            x: 79
            y: 62
            width: 140
            height: 26
            models: ["4800", "9600", "14400", "19200", "38400"]
            activeIndex: settingData.rfidBaudRate
        }

        ComboBoxCustom {
            id: cbRFIDDataSize
            x: 79
            y: 93
            width: 140
            height: 26
            models: ["7", "8"]
            activeIndex: settingData.rfidDataSize
        }

        ComboBoxCustom {
            id: cbRFIDParity
            x: 79
            y: 124
            width: 140
            height: 26
            models: ["None", "Yes"]
            activeIndex: settingData.rfidParity
        }
    }

    GroupBoxCustom {
        id: grLangSetting
        x: 313
        y: 21
        width: 247
        height: 72
        groupName: qsTr("Language") + appTrans.emptyString
        RadioButtonCustom{
            id: radioEN
            x: 8
            y: 44
            width: 20
            height: 20
            nameRadio: "EN"
            isActive: checkLanguage(Enum.EN)
            onChangeStatus: {
                changeLanguage(Enum.EN);
            }
        }

        RadioButtonCustom {
            id: radioJP
            x: 40
            y: 44
            width: 20
            height: 20
            isActive: checkLanguage(Enum.JP)
            nameRadio: "JP"
            onChangeStatus: {
                changeLanguage(Enum.JP);
            }
        }

        RadioButtonCustom {
            id: radioCN
            x: 73
            y: 44
            width: 20
            height: 20
            nameRadio: "CN"
            isActive: checkLanguage(Enum.CN)
            onChangeStatus: {
                changeLanguage(Enum.CN);
            }
        }

        RadioButtonCustom {
            id: radioKR
            x: 108
            y: 44
            width: 20
            height: 20
            isActive: checkLanguage(Enum.KR)
            nameRadio: "KR"
            onChangeStatus: {
                changeLanguage(Enum.KR);
            }
        }

        RadioButtonCustom {
            id: radioVI
            x: 144
            y: 44
            width: 20
            height: 20
            nameRadio: "VI"
            isActive: checkLanguage(Enum.VI)
            onChangeStatus: {
                changeLanguage(Enum.VI);
            }
        }
    }

    Button1State{
        id: btnSaveSetting
        x: 480
        y: 390
        width: 80
        height: 31
        color: "#009dff"
        radius: 3
        border.color: "#009dff"
        nameButton: qsTr("Save") + appTrans.emptyString
        onClick: {
            settingData.setLanPortNo(txtRBPortNo.updatedContent)
            settingData.setLanguage(language)
            settingData.setLpComName(cbLPComNo.activeIndex)
            settingData.setLpBaudRate(cbLPBaud.activeIndex)
            settingData.setLpDataSize(cbLPDataSize.activeIndex)
            settingData.setLpParity(cbLPParity.activeIndex)
            settingData.setRfidComName(cbRFIDComNo.activeIndex)
            settingData.setRfidBaudRate(cbRFIDBaud.activeIndex)
            settingData.setRfidDataSize(cbRFIDDataSize.activeIndex)
            settingData.setRfidParity(cbRFIDParity.activeIndex)
            saveSettingData();
            aniOpacity.start()
        }
    }

    Text {
        id: txtSaveStatus
        text: qsTr("Save config file successful!") + appTrans.emptyString
        anchors.right: parent.right
        anchors.rightMargin: 8
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        font.pixelSize: 14
        color: "green"
        font.bold: true
        opacity: 0.0
    }

    SequentialAnimation{
        id: aniOpacity
        NumberAnimation {
            target: txtSaveStatus
            properties: "opacity"
            from: 0.0; to: 1.0
            easing.type: Easing.OutExpo; duration: 1000
        }
        NumberAnimation {
            target: txtSaveStatus
            properties: "opacity"
            from: 1.0; to: 0.0
            easing.type: Easing.OutExpo; duration: 1000
        }
    }

    GroupBoxCustom {
        id: grYaskawaAligner
        x: 313
        y: 298
        width: 247
        height: 72
        groupName: qsTr("Use Yaskawa's Aligner:") + appTrans.emptyString
        RadioButtonCustom {
            id: radioUseYaskawaAligner
            x: 8
            y: 44
            width: 20
            height: 20
            isActive: true
            nameRadio: "Use"
        }

        RadioButtonCustom {
            id: radioNoUseYaskawaAligner
            x: 40
            y: 44
            width: 20
            height: 20
            isActive: checkLanguage(Enum.JP)
            nameRadio: "No"
        }
    }

    function changeLanguage(num){
        appTrans.updateLanguage(num);
        radioEN.isActive = false;
        radioJP.isActive = false;
        radioCN.isActive = false;
        radioKR.isActive = false;
        radioVI.isActive = false;
        switch(num){
        case Enum.EN:
            radioEN.isActive = true;
            break;
        case Enum.JP:
            radioJP.isActive = true;
            break;
        case Enum.CN:
            radioCN.isActive = true;
            break;
        case Enum.KR:
            radioKR.isActive = true;
            break;
        case Enum.VI:
            radioVI.isActive = true;
            break;
        default:
            radioEN.isActive = true;
            break;
        }
        language = num;
        settingData.setLanguage(language)
        saveSettingData();
    }

    function checkLanguage(lang){
        var currentLang = settingData.language
        if(lang === currentLang)
            return true
        else
            return false
    }
}
