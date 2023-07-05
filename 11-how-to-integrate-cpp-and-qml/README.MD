# How to integrate C++ and QML? Exposing C++ objects to QML - Qt QML Tutorial #11

## Episode Purpose
In this episode, you will learn how to expose objects from C++ to QML in Qt. The episode will cover various techniques, including the use of `setContextProperty`, `QML_SINGLETON`, and `qmlRegisterSingletonInstance`. We will explain the differences between these approaches and guide you in choosing the appropriate method for your application. Additionally, you will explore the usage of exposed C++ objects in QML.

Episode Link: **[YT LINK]**

## Code Short Description

In this coding example, we enhance our song player app by implementing the player control logic in C++ instead of QML. To achieve this, we  create a new class called `PlayerController`. Inside this class, we  define `Q_PROPERTIES` such as the current song, song count, and playing state. We will also create slots to control the current playback.

To expose the `PlayerController` object to QML, we will make use of the `qmlRegisterSingletonInstance` function in `main.cpp` file, right before creation of `QQmlEngine`. By doing so, we can remove the existing `QtObject` in QML and replace it with our singleton.

In general the behavior of app didn't change, but we utilized greater separation of logic and UI.