# Qt Resource System and Asset Integration - Qt QML Tutorial #10

## Episode Purpose
In this episode, you will learn about the Qt Resource system and how to integrate assets, such as images and icons, into your Qt QML application. The episode will explain the process of adding images and videos to the app using the `qt_add_qml_module` directive. Additionally, it will cover setting a custom icon for the application's window.

Episode Link: **[YT LINK]**

## Code Short Description
In this coding example, we will continue improving our music player app. Previously, we had a basic version with mocked-up rectangles as song covers and text buttons. Now, we will enhance the app by adding actual covers for the songs and replacing the text buttons with buttons adorned with real icons.

The `rectangle` in AudioInfoBox is replaced with `Image`, as well as appropriate alias name, and all references to old property. Now sources to images are provided instead of colors in `main.qml` file.

Usage of `qt_add_qml_module` directive allows to integrate the added resources into the application, enabling their use within QML components.

Furthermore, we will explore how to set a custom icon for your application's window, with a use of `QCoreApplication::setWindowIcon()`