import QtQuick 2.0
import Enum 1.2
import "./Common"

Rectangle {
    id: commandScreen
    color: "#e0e0e0"
    radius: 5

    Text {
        id: txtRFIDCommandScreen
        text: qsTr("Setting default command for RFID:")
        font.bold: true
        anchors.left: parent.left
        anchors.leftMargin: 14
        anchors.top: parent.top
        anchors.topMargin: 8
        font.pixelSize: 12
    }
}
