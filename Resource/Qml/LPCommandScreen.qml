import QtQuick 2.0
import Enum 1.2
import "Common"

Rectangle {
    id: commandScreen
    height: 543
    color: "#e0e0e0"
    radius: 5
    Text {
        id: txtLPCommandScreen
        text: qsTr("Setting default command for Load Port:")
        font.bold: true
        anchors.left: parent.left
        anchors.leftMargin: 14
        anchors.top: parent.top
        anchors.topMargin: 8
        font.pixelSize: 12
    }

    GroupBoxCustom {
        id: grResponseType
        x: 14
        y: 29
        width: 245
        height: 47
        textSize: 12
        groupName: "Default for response message"

        RadioButtonVerCustom {
            id: radioResponseACK
            x: 8
            y: 23
            nameRadio: "ACK"
            isActive: true
            onChangeStatus: {
                changeLPResponseType(0/*Enum.LP_RES_ACK*/);
            }
        }

        RadioButtonVerCustom {
            id: radioResponseNAK
            x: 76
            y: 23
            nameRadio: "NAK"
            isActive: false
            onChangeStatus: {
                changeLPResponseType(1/*Enum.LP_RES_NAK*/);
            }
        }
    }

    GroupBoxCustom {
        id: grTerminateType
        x: 279
        y: 29
        width: 245
        height: 47
        textSize: 12
        RadioButtonVerCustom {
            id: radioTerminateINF
            x: 8
            y: 23
            nameRadio: "INF"
            isActive: true
            onChangeStatus: {
                changeLPTerminateType(0/*Enum.LP_TER_INF*/);
            }
        }

        RadioButtonVerCustom {
            id: radioTerminateABS
            x: 76
            y: 23
            nameRadio: "ABS"
            isActive: false
            onChangeStatus: {
                changeLPTerminateType(1/*Enum.LP_TER_ABS*/);
            }
        }
        groupName: "Default for terminate message"
    }

    GroupBoxCustom {
        id: grLPVersion
        x: 14
        y: 95
        width: 245
        height: 57
        textSize: 12
        groupName: "Setting Load Port Version"

        TextEdit {
            id: txtLPVersion
            x: 8
            y: 23
            width: 146
            height: 26
            content: "SDK_VER7-1-4"
            isReadOnly: true
        }
    }

    GroupBoxCustom {
        id: grLPState
        x: 279
        y: 95
        width: 245
        height: 57
        textSize: 12
        TextEdit {
            id: txtLPState
            x: 8
            y: 23
            width: 229
            height: 26
            isReadOnly: true
            content: "00000010000000011111"
        }
        groupName: "Setting Load Port State"
    }

    GroupBoxCustom {
        id: grLPSlotInfo
        x: 14
        y: 176
        width: 510
        height: 359
        textSize: 12
        groupName: "Setting Load Port Slot Information"
        ListView {
            id: listLPInformation
            y: 18
            width: 225
            height: 336
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 5
            anchors.left: parent.left
            anchors.leftMargin: 8
            model: 30
            enabled: false
            delegate: Rectangle {
                width: listLPInformation.width
                height: listLPInformation.height / 30
                color: "green"
                border.color: "white"
                Text {
                    text: index+1
                    anchors.centerIn: parent
                    color: "white"
                }
            }
        }

        Rectangle {
            id: recSettingAllSlot
            x: 256
            y: 8
            width: 223
            height: 84
            color: "transparent"
            border.color: "gray"

            Button1State {
                id: btnAllSlotSet
                x: 123
                y: 37
                width: 80
                height: 31
                color: "#009dff"
                radius: 3
                border.color: "#009dff"
                nameButton: "Set"
            }

            ComboBoxCustom {
                id: cbAllSlotSetting
                x: 75
                y: 4
                width: 128
                height: 27
                models: ["Has Wafer", "No Wafer"]
            }

            Text {
                id: txtSetting
                x: 9
                y: 10
                text: qsTr("Set all slot")
                font.pixelSize: 14
            }

            Text {
                id: element
                x: 9
                y: 45
                color: "#ff0000"
                text: qsTr("TBD")
                font.bold: true
                font.pixelSize: 20
            }
        }

        Rectangle {
            id: recSettingAllSlot1
            x: 256
            y: 108
            width: 223
            height: 125
            color: "#00000000"
            Button1State {
                id: btn1SlotSet
                x: 124
                y: 86
                width: 80
                height: 31
                color: "#009dff"
                radius: 3
                nameButton: "Set"
                border.color: "#009dff"
            }

            ComboBoxCustom {
                id: cbSlotInfo
                x: 76
                y: 45
                width: 128
                height: 27
                models: ["Has Wafer", "No Wafer"]
            }

            Text {
                id: txtSetting1
                x: 9
                y: 10
                text: qsTr("Set slot")
                font.pixelSize: 14
            }

            ComboBoxCustom {
                id: cbSlotNo
                x: 76
                y: 5
                width: 128
                height: 27
                models: ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                        "11", "12", "13", "14", "15", "16", "17", "18", "19", "20",
                    "21", "22", "23", "24", "25", "26", "27", "28", "29", "30"]
            }

            Text {
                id: element1
                x: 8
                y: 94
                color: "#ff0000"
                text: qsTr("TBD")
                font.bold: true
                font.pixelSize: 20
            }
            border.color: "#808080"
        }
    }

    function changeLPResponseType(num){
        radioResponseACK.isActive = false;
        radioResponseNAK.isActive = false;
        switch(num){
        case 0/*Enum.LP_RES_ACK*/:
            radioResponseACK.isActive = true;
            break;
        case 1/*Enum.LP_RES_NAK*/:
            radioResponseNAK.isActive = true;
            break;
        default:
            radioResponseACK.isActive = true;
            break;
        }
        settingData.setLpResponseMode(num)
    }

    function changeLPTerminateType(num){
        radioTerminateINF.isActive = false;
        radioTerminateABS.isActive = false;
        switch(num){
        case 0/*Enum.LP_TER_INF*/:
            radioTerminateINF.isActive = true;
            break;
        case 1/*Enum.LP_TER_ABS*/:
            radioTerminateABS.isActive = true;
            break;
        default:
            radioTerminateINF.isActive = true;
            break;
        }
        settingData.setLpTerminateMode(num)
    }
}

/*##^##
Designer {
    D{i:1;anchors_x:14;anchors_y:8}
}
##^##*/
