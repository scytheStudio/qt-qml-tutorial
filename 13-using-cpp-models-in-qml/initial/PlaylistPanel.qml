import QtQuick

Rectangle {
  id: root

  property bool hidden: true

  height: 400
  width: 250

  color: "#333333"

  Text {
    id: playlistText

    anchors {
      left: parent.left
      top: parent.top
      margins: 10
    }

    text: "Playlist"
    color: "white"
    font {
      bold: true
      pixelSize: 20
    }
  }

  ImageButton {
    id: addButton

    anchors {
      left: parent.left
      bottom: parent.bottom
      margins: 20
    }

    source: "assets/icons/add_icon.png"

    width: 32
    height: 32

    onClicked: {

    }
  }

  Behavior on x {
    PropertyAnimation {
      easing.type: Easing.InOutQuad
      duration: 200
    }
  }
}
