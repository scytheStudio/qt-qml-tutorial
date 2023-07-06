# Using C++ Models in QML - Qt QML Tutorial #13

![Episode Image](episode_image.png)

## Episode Purpose

In this episode, you will explore the Model-View pattern system in Qt and specifically focus on QAbstractItemModel. The episode will explain the concept of the Model-View pattern, highlighting the separation of data and presentation. We will discuss the benefits of using QAbstractItemModel to expose lists of data from C++ to QML, allowing for dynamic updates and synchronization between the UI and the data source.


Episode Link: **[YT LINK]**

## Code Short Description

Continuation of improving our audio player in QML. Following code introduces a Playlist mechanism, allowing to add, remove or play specific items at given position.

To do so, `PlayerController` has been transformed to be derived from `QAbstractListModel`, providing methods to modify playlist and access it. To make it possible, `QList` encapsulating `AudioInfo` entries has been added as a part to this class.

On the QML side, a `PlaylistPanel` has been prepared to display the list of audios as a playlist. Both files have been added to the `qt_add_qml_module`.

## About Scythe Studio
We are a group of Qt and C++ enthusiasts whose goal is to address growing demand for cross-platform Qt development services. Thanks to our expertise in **Qt Qml development**, quality of deliveries and proven track of projects developed for companies from various industries we have been awarded the title of an official **Qt Service Partner**.

<span> 
<a href="https://scythe-studio.com"><img width="340" height="150" src="https://user-images.githubusercontent.com/45963332/221174257-c1e1a9d9-0efa-4b25-996b-4b364ccb325c.svg"></a>
<a href="https://clutch.co/profile/scythe-studio"><img height="150" width="150" src="https://user-images.githubusercontent.com/45963332/221174280-99b32a1d-7418-4a49-bcea-6927639cf557.png"></a>
</span>

The company offers broad spectrum of services for the clients who wish to bring their ideas to life. We have extensive and practical knowledge about various Qt modules and other technologies allowing to create high quality product in a cost effective approach. If you want to see what Scythe Studio is is capable of and what services we provide, check out [this link](https://scythe-studio.com/en/services).

## Follow us

Check out those links if you want to see Scythe Studio in action and follow the newest trends saying about Qt Qml development.

* 🌐 [Scythe Studio Website](https://scythe-studio.com/en/)
* ✍️  [Scythe Studio Blog Website](https://scythe-studio.com/en/blog)
* 👔 [Scythe Studio LinkedIn Profile](https://www.linkedin.com/company/scythestudio/mycompany/)
* 👔 [Scythe Studio Facebook Page](https://www.facebook.com/ScytheStudiio)
* 🎥 [Scythe Studio Youtube Channel](https://www.youtube.com/channel/UCf4OHosddUYcfmLuGU9e-SQ/featured)