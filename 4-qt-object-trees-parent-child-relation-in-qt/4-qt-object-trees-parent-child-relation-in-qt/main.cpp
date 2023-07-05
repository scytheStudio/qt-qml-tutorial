#include <QCoreApplication>
#include "ApplicationWindow.h"
#include <QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    ApplicationWindow rootWindow("Root Window");

    ApplicationWindow *parentWindow1 = new ApplicationWindow("Parent Window 1", &rootWindow);
    ApplicationWindow *parentWindow2 = new ApplicationWindow("Parent Window 2", &rootWindow);

    for (int i =0 ; i < 2; i++) {
        ApplicationWindow *childWindow1 = new ApplicationWindow(QString("Child window %1 of Parent Window 1").arg(i), parentWindow1);
        ApplicationWindow *childWindow2 = new ApplicationWindow(QString("Child window %1 of Parent Window 2").arg(i), parentWindow2);
    }

    QTimer::singleShot(5000, [&](){
       app.quit();
    });

    return app.exec();
}
