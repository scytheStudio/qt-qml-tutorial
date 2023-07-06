#ifndef FIREFOX_H
#define FIREFOX_H

#include <QObject>

class Firefox : public QObject
{
    Q_OBJECT
public:
    explicit Firefox(QObject *parent = nullptr);

public slots:
    void browse(const QString &phrase);

};

#endif // FIREFOX_H
