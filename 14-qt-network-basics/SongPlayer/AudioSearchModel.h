#ifndef AUDIOSEARCHMODEL_H
#define AUDIOSEARCHMODEL_H

#include <QAbstractListModel>
#include <QNetworkAccessManager>

class AudioInfo;

class AudioSearchModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(bool isSearching READ isSearching NOTIFY isSearchingChanged)

public:
    enum Role {
        AudioNameRole = Qt::UserRole + 1,
        AudioAuthorRole,
        AudioImageSourceRole,
        AudioSourceRole
    };

    explicit AudioSearchModel(QObject *parent = nullptr);

    virtual int rowCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    virtual QHash<int, QByteArray> roleNames() const override;

    bool isSearching() const;
    void setIsSearching(bool newIsSearching);

public slots:
    void searchSong(const QString &name);
    void parseData();

signals:
    void isSearchingChanged();

private:
    QList<AudioInfo*> m_audioList;
    QNetworkAccessManager m_networkManager;
    QNetworkReply *m_reply = nullptr;
    bool m_isSearching;
};

#endif // AUDIOSEARCHMODEL_H
