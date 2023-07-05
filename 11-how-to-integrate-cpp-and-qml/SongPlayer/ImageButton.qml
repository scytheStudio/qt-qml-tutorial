import QtQuick

Image {
  id: root

  signal clicked

  opacity: buttonMouseArea.containsMouse ? 0.75 : 1
  mipmap: true

  MouseArea {
    id: buttonMouseArea

    anchors.fill: parent

    hoverEnabled: true

    onClicked: {
      root.clicked()
    }
  }
}
