#ifndef AUDIOINFOMODEL_H
#define AUDIOINFOMODEL_H

#include <QAbstractListModel>

class AudioInfo;

class AudioInfoModel : public QAbstractListModel
{
    Q_OBJECT

public:
    enum Role {
        AudioNameRole = Qt::UserRole + 1,
        AudioAuthorRole,
        AudioImageSourceRole,
        AudioSourceRole
    };

    explicit AudioInfoModel(QObject *parent = nullptr);

    virtual int rowCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    virtual QHash<int, QByteArray> roleNames() const override;

private:
    QList<AudioInfo*> m_audioList;
};

#endif // AUDIOINFOMODEL_H
