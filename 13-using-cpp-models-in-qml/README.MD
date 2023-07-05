# Using C++ Models in QML - Qt QML Tutorial #13

## Episode Purpose

In this episode, you will explore the Model-View pattern system in Qt and specifically focus on QAbstractItemModel. The episode will explain the concept of the Model-View pattern, highlighting the separation of data and presentation. We will discuss the benefits of using QAbstractItemModel to expose lists of data from C++ to QML, allowing for dynamic updates and synchronization between the UI and the data source.


Episode Link: **[YT LINK]**

## Code Short Description

Continuation of improving our audio player in QML. Following code introduces a Playlist mechanism, allowing to add, remove or play specific items at given position.

To do so, `PlayerController` has been transformed to be derived from `QAbstractListModel`, providing methods to modify playlist and access it. To make it possible, `QList` encapsulating `AudioInfo` entries has been added as a part to this class.

On the QML side, a `PlaylistPanel` has been prepared to display the list of audios as a playlist. Both files have been added to the `qt_add_qml_module`.