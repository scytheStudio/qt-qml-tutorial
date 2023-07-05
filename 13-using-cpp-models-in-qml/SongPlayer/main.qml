import QtQuick
import com.company.PlayerController

Window {
  id: root

  width: 480
  height: 640

  visible: true

  title: qsTr("Song Player")

  Rectangle {
    id: topbar

    anchors {
      top: parent.top
      left: parent.left
      right: parent.right
    }

    height: 50
    color: "#5F8575"

    ImageButton {
      anchors {
        right: parent.right
        verticalCenter: parent.verticalCenter
        rightMargin: 20
      }

      width: 32
      height: 32
      source: "assets/icons/menu_icon.png"

      onClicked: {
        playlistPanel.hidden = !playlistPanel.hidden
      }
    }
  }

  Rectangle {
    id: mainSection

    anchors {
      top: topbar.bottom
      bottom: bottombar.top
      left: parent.left
      right: parent.right
    }

    color: "#1e1e1e"

    AudioInfoBox {
      id: songInfo

      anchors {
        verticalCenter: parent.verticalCenter
        left: parent.left
        right: parent.right
        margins: 20
      }
    }
  }

  Rectangle {
    id: bottombar

    anchors {
      bottom: parent.bottom
      left: parent.left
      right: parent.right
    }

    height: 100
    color: "#333333"

    Row {
      anchors.centerIn: parent

      spacing: 20
      enabled: !!PlayerController.currentSong
      opacity: enabled ? 1 : 0.3

      ImageButton {
        id: previousButton

        width: 64
        height: 64

        source: "assets/icons/previous_icon.png"

        onClicked: PlayerController.switchToPreviousSong()
      }

      ImageButton {
        id: playPauseButton

        width: 64
        height: 64

        source: PlayerController.playing ? "assets/icons/pause_icon.png" : "assets/icons/play_icon.png"

        onClicked: PlayerController.playPause()
      }

      ImageButton {
        id: nextButton

        width: 64
        height: 64

        source: "assets/icons/next_icon.png"

        onClicked: PlayerController.switchToNextSong()
      }
    }
  }

  PlaylistPanel {
    id: playlistPanel

    anchors {
      top: topbar.bottom
    }

    x: hidden ? parent.width : parent.width - width
  }
}
