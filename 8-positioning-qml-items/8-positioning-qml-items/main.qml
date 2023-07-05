import QtQuick
import QtQuick.Layouts

Window {
  width: 640
  height: 480
  visible: true
  title: qsTr("Hello World")

  color: "lightyellow"

  GridLayout {
    anchors.fill: parent

    rows: 2
    columns: 2
    rowSpacing: 10
    columnSpacing: 10

    Item {
      Layout.fillWidth: true
      Layout.fillHeight: true

      Rectangle {
        width: 50
        height: 50

        x: 50
        y: 50

        color: "orange"
      }
    }

    Item {
      Layout.fillWidth: true
      Layout.fillHeight: true

      Rectangle {
        anchors {
          top: parent.verticalCenter
          left: parent.horizontalCenter
        }

        width: 100
        height: 75

        color: "darkred"
      }
    }

    Item {
      Layout.fillWidth: true
      Layout.fillHeight: true

      Flow {
        anchors.fill: parent

        spacing: 20

        Repeater {
          model: 5

          Rectangle {
            width: 50
            height: 50

            color: "green"
          }
        }
      }
    }

    Item {
      Layout.fillWidth: true
      Layout.fillHeight: true

      GridLayout {
        anchors.fill: parent

        rows: 2
        columns: 2

        rowSpacing: 20
        columnSpacing: 20

        Rectangle {
          Layout.fillWidth: true
          Layout.fillHeight: true

          color: "black"
        }

        Rectangle {
          Layout.fillWidth: true
          Layout.fillHeight: true

          color: "red"
        }

        Rectangle {
          Layout.fillWidth: true
          Layout.fillHeight: true
          Layout.columnSpan: 2

          color: "magenta"
        }
      }
    }
  }
}
