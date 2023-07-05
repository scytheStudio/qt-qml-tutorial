#include "AudioInfo.h"

AudioInfo::AudioInfo(QObject *parent)
    : QObject{parent}
{

}

int AudioInfo::songIndex() const
{
    return m_songIndex;
}

void AudioInfo::setSongIndex(int newSongIndex)
{
    if (m_songIndex == newSongIndex)
        return;
    m_songIndex = newSongIndex;
    emit songIndexChanged();
}

QString AudioInfo::title() const
{
    return m_title;
}

void AudioInfo::setTitle(const QString &newTitle)
{
    if (m_title == newTitle)
        return;
    m_title = newTitle;
    emit titleChanged();
}

QString AudioInfo::authorName() const
{
    return m_authorName;
}

void AudioInfo::setAuthorName(const QString &newAuthorName)
{
    if (m_authorName == newAuthorName)
        return;
    m_authorName = newAuthorName;
    emit authorNameChanged();
}

QUrl AudioInfo::imageSource() const
{
    return m_imageSource;
}

void AudioInfo::setImageSource(const QUrl &newImageSource)
{
    if (m_imageSource == newImageSource)
        return;
    m_imageSource = newImageSource;
    emit imageSourceChanged();
}

QUrl AudioInfo::videoSource() const
{
    return m_videoSource;
}

void AudioInfo::setVideoSource(const QUrl &newVideoSource)
{
    if (m_videoSource == newVideoSource)
        return;
    m_videoSource = newVideoSource;
    emit videoSourceChanged();
}

QUrl AudioInfo::audioSource() const
{
    return m_audioSource;
}

void AudioInfo::setAudioSource(const QUrl &newAudioSource)
{
    if (m_audioSource == newAudioSource)
        return;
    m_audioSource = newAudioSource;
    emit audioSourceChanged();
}
