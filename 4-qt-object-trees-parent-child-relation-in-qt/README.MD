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
