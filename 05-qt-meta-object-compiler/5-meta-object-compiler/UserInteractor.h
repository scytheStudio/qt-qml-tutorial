#ifndef USERINTERACTOR_H
#define USERINTERACTOR_H

#include <QObject>

class UserInteractor : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString phrase READ phrase WRITE setPhrase NOTIFY phraseTyped)
public:
    explicit UserInteractor(QObject *parent = nullptr);

    void getInput();

    QString phrase() const;
    void setPhrase(const QString &newPhrase);

signals:
    void phraseTyped(const QString &phrase);

private:
    QString m_phrase;
};

#endif // USERINTERACTOR_H
