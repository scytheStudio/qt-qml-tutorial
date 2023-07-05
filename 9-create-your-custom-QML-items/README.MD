# Creating QML Items - Qt QML Tutorial #9

## Episode Purpose
In this episode, you will learn how to create new QML items. The episode will showcase the process of creating additional QML items using the `qt_add_qml_module` directive. This will allow you to expand the functionality of your QML application.

Episode Link: **[YT LINK]**

## Code Short Description

In this coding example, you will create a simple interface for a potential music player. The goal is to create text buttons that control the currently played songs - those are implemented in `TextButton.qml`. Additionally, an `AudioInfoBox.qml` item is created to display information about the currently playing song.

To add an extra `.qml` files to the project, `qt_add_qml_module` method is used in `CMakeLists.txt`. This enables the creation and integration of new QML items into the application.

Music playback functionality is not be implemented at this point. The focus of this episode is on demonstrating the creation of new elements in QML. In future episodes we will cover additional functionalities.