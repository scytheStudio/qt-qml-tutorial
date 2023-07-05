# Signals and slots in Qt - Qt QML Tutorial #3

## Episode Purpose
In this episode, we will explore the concept of signals and slots in Qt. We will understand why Qt introduced signals as an alternative to callbacks, especially in GUI development. We will learn how signals work and explore the signature of the `QObject::connect()` function.

This episode will demonstrate the usage and interaction of signals and slots in Qt, highlighting their importance in event-driven programming.

Episode Link: **[YT LINK]**

## Code Short Description
The code consists of three classes: `UserInteractor`, `Firefox`, and `InternetExplorer`.

- `UserInteractor`: This class prompts the user to input a phrase to search for. It emits a signal `phraseTyped(const QString &phrase)` with the entered phrase as a parameter.

- `Firefox`: This class has a slot function named `browse()`.

- `InternetExplorer`: This class has a signal named `browseRequested()` and a slot named `browse()`.

We will also use the `QTimer` class provided by the Qt framework to implement a delay. `QTimer` allows us to create timer-like actions.

The communication between objects of these classes:

1. When the `phraseTyped` signal is emitted by `UserInteractor`, it will trigger both the `browse()` slot in `Firefox` and the `browseRequested()` signal in `InternetExplorer`.

2. The emitted `browseRequested()` signal will start the timer.

3. After 10 seconds, the timer will emit a `timeout()` signal, which is connected to the `browse()` function in `InternetExplorer`.

