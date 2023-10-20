#include <QCoreApplication>
#include "UserInteractor.h"

#include "Firefox.h"
#include "InternetExplorer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    UserInteractor interactor;
    Firefox firefox;
    InternetExplorer internetExplorer;

    QObject::connect(&interactor, &UserInteractor::phraseTyped, &firefox, &Firefox::browse);
    QObject::connect(&interactor, &UserInteractor::phraseTyped, &internetExplorer, &InternetExplorer::browseRequested);

    interactor.getInput();

    return a.exec();
}
