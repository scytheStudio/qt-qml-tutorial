# Qt Object trees. Parent-child relation in Qt - Qt QML Tutorial #4

## Episode Purpose
In this episode, we will dive into the concept of object trees and the parent-child relation in Qt. We will explore why Qt introduced parenting to better manage memory and discuss why it matters in Qt applications. 

This episode will highlight the parent-child relation in Qt object trees and demonstrate how it enables efficient memory management by automatically handling the destruction of child objects when their parent objects are destroyed.

Episode Link: **[YT LINK]**

## Code Short Description
Application consists of multiple windows, where each window can create and manage subwindows. Closing a parent window will automatically close all its associated subwindows.

To demonstrate this behavior, there's a class named `ApplicationWindow`, based on `QObject`. Note this is not actual GUI program, but a simple representation of the window in the program's memory.

Each `ApplicationWindow` object will have a title stored as a `QString`. To indicate when a window is opened or closed, there're console outputs in the constructor and destructor of the class.

In main.cpp there are many `ApplicationWindow` instances created, including one root window and two main windows. Each main window has several subwindows associated with it. Simulation of closing of windows is done using the `QTimer` class.

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