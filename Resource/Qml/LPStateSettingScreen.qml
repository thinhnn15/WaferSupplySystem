import QtQuick 2.0
import Enum 1.3
import "Common"

Rectangle {
    id: chgLPStateScreen
    height: 543
    color: "#e0e0e0"
    radius: 5
    objectName: "chgLPStateScreen"

    Text {
        id: txtLPCommandScreen
        text: qsTr("Setting for Load Port State:")
        font.bold: true
        anchors.left: parent.left
        anchors.leftMargin: 14
        anchors.top: parent.top
        anchors.topMargin: 8
        font.pixelSize: 14
    }

    GroupBoxCustom {
        id: gbEQStatus
        x: 14
        y: 31
        width: 198
        height: 72
        groupName: "EQ Status"

        RadioButtonCustom {
            id: rdEQStateNoErr
            x: 15
            y: 42
            nameRadio: "No Err"
        }

        RadioButtonCustom {
            id: rdEQStateErrRetryOK
            x: 74
            y: 42
            nameRadio: "Err Retry OK"
        }

        RadioButtonCustom {
            id: rdEQStateErrRetryNG
            x: 147
            y: 42
            nameRadio: "Err Retry NG"
        }
    }

    GroupBoxCustom {
        id: gbMode
        x: 219
        y: 31
        width: 198
        height: 72
        RadioButtonCustom {
            id: rdModeHost
            x: 15
            y: 42
            nameRadio: "HOST"
        }

        RadioButtonCustom {
            id: rdModeManual
            x: 74
            y: 42
            nameRadio: "MANUAL"
        }
        groupName: "Mode"
    }

    GroupBoxCustom {
        id: gbIniPosShift
        x: 423
        y: 31
        width: 198
        height: 72
        RadioButtonCustom {
            id: rdIniPosShiftNotExe
            x: 15
            y: 42
            nameRadio: "Not exe"
        }

        RadioButtonCustom {
            id: rdIniPosShiftExe
            x: 74
            y: 42
            nameRadio: "Executed"
        }
        groupName: "Ini Pos Shift"
    }

    GroupBoxCustom {
        id: gbOpeStatus
        x: 14
        y: 109
        width: 198
        height: 72
        RadioButtonCustom {
            id: rdOpeStsStopped
            x: 15
            y: 42
            nameRadio: "Stopped"
        }

        RadioButtonCustom {
            id: rdOpeStsBusy
            x: 74
            y: 42
            nameRadio: "Busy"
        }
        groupName: "Ope Status"
    }

    GroupBoxCustom {
        id: gbErrorCode
        x: 219
        y: 109
        width: 198
        height: 72
        groupName: "Error Code"

        CellText {
            id: cellText
            x: 14
            y: 31
            width: 45
            height: 25
            content: "Upper"
            isReadOnly: true
        }

        CellText {
            id: txtErrCodeUpper
            x: 59
            y: 31
            width: 22
            height: 25
            activeFocusOnTab: true
            content: "0"
            isReadOnly: false
        }

        CellText {
            id: cellText2
            x: 123
            y: 31
            width: 45
            height: 25
            content: "Lower"
            isReadOnly: true
        }

        CellText {
            id: txtErrCodeLower
            x: 168
            y: 31
            width: 22
            height: 25
            content: "0"
            isReadOnly: false
            activeFocusOnTab: true
        }
    }
}

/*##^##
Designer {
    D{i:1;anchors_x:14;anchors_y:8}
}
##^##*/
