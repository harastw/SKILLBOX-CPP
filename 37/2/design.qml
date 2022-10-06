import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ColumnLayout {
        anchors.fill: parent
        spacing: 2
        Rectangle {
            height: 375
            width: 640
            color: "black"
        }
        RowLayout {
            Button {
                text: qsTr("▶️")
            }
            Button {
                text: qsTr("⏸️")
            }
            Button {
                text: qsTr("⏹")
            }
            Button {
                text: qsTr("⏪️")
            }
            Button {
                text: qsTr("⏩️")
            }
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Slider {
            from: 0
            value: 0
            to: 100
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Item { Layout.fillHeight: true }
   }
}
