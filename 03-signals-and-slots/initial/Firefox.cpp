#include "Firefox.h"
#include <QDebug>

Firefox::Firefox(QObject *parent)
    : QObject{parent}
{

}

void Firefox::browse(const QString &phrase)
{
    qDebug() << "\nDisplaying results for " << phrase
             << "\nResult 1"
             << "\nResult 2"
             << "\nResult 3";
}
