import QtQuick 2.15
import QtQuick.Window 2.15

Window {
  width: 640
  height: 480
  visible: true
  title: qsTr("Circle")

  Rectangle {
    id: leftRectangle
    width: 100
    height: 100
    color: "grey"
    radius: 2

    x: 50
    y: 240

    MouseArea {
      id: mouseAreaLeft
      anchors.fill: parent
      onClicked: circle.x === 400 ? circleAnimation.start() : circle.x += 50;
    }
  }

  Rectangle {
    id: rightRectangle
    width: 100
    height: 100
    color: "grey"
    radius: 2

    x: 400
    y: 240

    MouseArea {
      id: mouseAreaRight
      anchors.fill: parent
      onClicked: circle.x = 50
    }
  }

  Rectangle {
    id: circle
    width: 100
    height: 100
    color: "green"
    border.width: 0
    radius: 100

    x: 50
    y: 240

    NumberAnimation on x {
      running: false
      id: circleAnimation
      from: 400; to: 50
    }
  }
}
