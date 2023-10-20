#include "UserInteractor.h"
#include <QTextStream>
#include <QDebug>

UserInteractor::UserInteractor(QObject *parent)
    : QObject{parent}
{
}

void UserInteractor::getInput()
{
    qDebug() << "\nType in your search phrase:\n";

    QTextStream s(stdin);
    const auto &phrase = s.readLine();

    if (!phrase.isEmpty()) {
        setPhrase(phrase);
    }
}

QString UserInteractor::phrase() const
{
    return m_phrase;
}

void UserInteractor::setPhrase(const QString &newPhrase)
{
    if (m_phrase == newPhrase)
        return;
    m_phrase = newPhrase;
    emit phraseTyped(m_phrase);
}
