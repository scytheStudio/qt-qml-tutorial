#include "ApplicationWindow.h"
#include <QDebug>

ApplicationWindow::ApplicationWindow(const QString &title, QObject *parent)
    : QObject{parent}
    , m_title(title)
{
    qDebug() << "Window created" << m_title;
}

ApplicationWindow::~ApplicationWindow()
{
    qDebug() << "Window closed" << m_title;
}
