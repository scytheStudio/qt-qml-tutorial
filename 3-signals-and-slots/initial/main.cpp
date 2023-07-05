#include <QCoreApplication>
#include "UserInteractor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    UserInteractor interactor;
    interactor.getInput();

    return a.exec();
}
