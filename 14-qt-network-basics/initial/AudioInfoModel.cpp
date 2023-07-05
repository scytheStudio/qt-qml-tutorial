#include "AudioInfoModel.h"
#include "AudioInfo.h"

AudioInfoModel::AudioInfoModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

int AudioInfoModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_audioList.size();
}

QVariant AudioInfoModel::data(const QModelIndex &index, int role) const
{
    if (index.isValid() && index.row() >= 0 && index.row() < m_audioList.size()) {
        AudioInfo *audioInfo = m_audioList[index.row()];

        switch((Role)role) {
        case AudioNameRole:
            return audioInfo->title();
        case AudioAuthorRole:
            return audioInfo->authorName();
        case AudioImageSourceRole:
            return audioInfo->imageSource();
        case AudioSourceRole:
            return audioInfo->audioSource();
        }
    }

    return {};
}

QHash<int, QByteArray> AudioInfoModel::roleNames() const
{
    QHash<int, QByteArray> names;

    names[AudioNameRole] = "audioName";
    names[AudioAuthorRole] = "audioAuthor";
    names[AudioImageSourceRole] = "audioImageSource";
    names[AudioSourceRole] = "audioSource";

    return names;
}
