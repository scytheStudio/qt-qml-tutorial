#include <QCoreApplication>
#include "UserInteractor.h"

#include "Firefox.h"
#include "InternetExplorer.h"
#include "qvariant.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    UserInteractor interactor;
    Firefox firefox;
    InternetExplorer internetExplorer;

    firefox.setProperty("version", "2.12.12");

    QObject::connect(&interactor, &UserInteractor::phraseTyped, &a, [&]() {
        QObject *obj = &interactor;
        qDebug() << obj->property("phrase");
        qDebug() << firefox.property("version");
    });

    interactor.getInput();

    return a.exec();
}
