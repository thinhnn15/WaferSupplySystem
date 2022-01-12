import QtQuick 2.0
import Enum 1.3
import "Common"

Rectangle {
    id: commandScreen
    height: 543
    color: "#e0e0e0"
    radius: 5
    objectName: "lpCommandScreen"
    signal sendLPEvent(string name)
    signal setAllSlotStatus(int status)
    signal setSlotStatus(int slotNo, int status)
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
            isActive: (settingData.lpResponseMode == Enum.LP_RES_ACK) ? true : false
            onChangeStatus: {
                changeLPResponseType(Enum.LP_RES_ACK);
            }
        }

        RadioButtonVerCustom {
            id: radioResponseNAK
            x: 76
            y: 23
            nameRadio: "NAK"
            isActive: (settingData.lpResponseMode == Enum.LP_RES_NAK) ? true : false
            onChangeStatus: {
                changeLPResponseType(Enum.LP_RES_NAK);
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
            isActive: (settingData.lpTerminateMode == Enum.LP_TER_INF) ? true : false
            onChangeStatus: {
                changeLPTerminateType(Enum.LP_TER_INF);
            }
        }

        RadioButtonVerCustom {
            id: radioTerminateABS
            x: 76
            y: 23
            nameRadio: "ABS"
            isActive: (settingData.lpTerminateMode == Enum.LP_TER_ABS) ? true : false
            onChangeStatus: {
                changeLPTerminateType(Enum.LP_TER_ABS);
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
        width: 520
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
            model: listSlot
            enabled: false
            verticalLayoutDirection: ListView.BottomToTop
            spacing: 1
            delegate: Rectangle {
                width: listLPInformation.width
                height: listLPInformation.height / 30 - 1
                color: (status === Enum.SLOT_HAS_WAFER) ? "green" : "gray"
                border.color: "#707070"
                Text {
                    text: index+1
                    anchors.centerIn: parent
                    color: "white"
                }
            }
        }

        GroupBoxCustom {
            id: recSettingAllSlot
            x: 267
            y: 19
            width: 245
            height: 106
            groupName: "Set status for all slots"

            Button1State {
                id: btnAllSlotSet
                x: 8
                y: 67
                width: 80
                height: 31
                color: "#009dff"
                radius: 3
                border.color: "#009dff"
                nameButton: "Set"
                onClick: {
                    var status = cbAllSlotSetting.activeIndex;
                    setAllSlotStatus(status);
                }
            }

            ComboBoxCustom {
                id: cbAllSlotSetting
                x: 83
                y: 29
                width: 128
                height: 27
                models: ["Has Wafer", "No Wafer"]
            }

            Text {
                id: element
                x: 8
                y: 35
                width: 69
                height: 15
                text: qsTr("Status:")
                font.pixelSize: 12
            }
        }

        GroupBoxCustom {
            id: recSettingAllSlot1
            x: 267
            y: 147
            width: 245
            height: 130
            groupName: "Set status for each slot"
            Button1State {
                id: btn1SlotSet
                x: 8
                y: 94
                width: 80
                height: 31
                color: "#009dff"
                radius: 3
                nameButton: "Set"
                border.color: "#009dff"
                onClick: {
                    var slotNo = cbSlotNo.activeIndex;
                    var status = cbSlotInfo.activeIndex;
                    setSlotStatus(slotNo, status);
                }
            }

            ComboBoxCustom {
                id: cbSlotInfo
                x: 86
                y: 61
                width: 128
                height: 27
                models: ["Has Wafer", "No Wafer"]
            }

            ComboBoxCustom {
                id: cbSlotNo
                x: 86
                y: 27
                width: 128
                height: 27
                models: ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                        "11", "12", "13", "14", "15", "16", "17", "18", "19", "20",
                    "21", "22", "23", "24", "25", "26", "27", "28", "29", "30"]
            }

            Text {
                id: element1
                x: 8
                y: 33
                text: qsTr("Slot No:")
                font.pixelSize: 12
            }

            Text {
                id: element2
                x: 8
                y: 67
                width: 69
                height: 15
                text: qsTr("Status:")
                font.pixelSize: 12
            }
        }

        GroupBoxCustom {
            id: grLPEvent
            x: 267
            y: 298
            width: 245
            height: 56
            textSize: 12
            groupName: qsTr("Send  Load Port Event")

            Button1State {
                id: btnLPMansw
                x: 8
                y: 20
                width: 80
                height: 31
                color: "#009dff"
                radius: 3
                border.color: "#009dff"
                nameButton: "MANSW"
                onClick: {
                    sendLPEvent("MANSW");
                }
            }

            Button1State {
                id: btnLPManof
                x: 156
                y: 20
                width: 80
                height: 31
                color: "#009dff"
                radius: 3
                anchors.verticalCenterOffset: 0
                anchors.verticalCenter: btnLPMansw.verticalCenter
                border.color: "#009dff"
                nameButton: "MANOF"
                onClick: {
                    sendLPEvent("MANOF");
                }
            }
        }
    }

    function changeLPResponseType(num){
        radioResponseACK.isActive = false;
        radioResponseNAK.isActive = false;
        switch(num){
        case Enum.LP_RES_ACK:
            radioResponseACK.isActive = true;
            break;
        case Enum.LP_RES_NAK:
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
        case Enum.LP_TER_INF:
            radioTerminateINF.isActive = true;
            break;
        case Enum.LP_TER_ABS:
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
