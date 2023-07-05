#include "PlayerController.h"
#include <QMediaDevices>
#include <QAudioDevice>
#include <QAudioOutput>

PlayerController::PlayerController(QObject *parent)
    : QObject{parent}
{
    const auto &audioOutputs = QMediaDevices::audioOutputs();
    if (!audioOutputs.isEmpty()) {
        m_mediaPlayer.setAudioOutput(new QAudioOutput(&m_mediaPlayer));
    }
}

int PlayerController::currentSongIndex() const
{
    return m_currentSongIndex;
}

int PlayerController::songCount() const
{
    return m_songCount;
}

bool PlayerController::playing() const
{
    return m_playing;
}

void PlayerController::switchToNextSong()
{
    if (m_currentSongIndex + 1 >= m_songCount) {
        m_currentSongIndex = 0;
    } else {
        m_currentSongIndex++;
    }

    emit currentSongIndexChanged();
}

void PlayerController::switchToPreviousSong()
{
    if (m_currentSongIndex - 1 < 0) {
        m_currentSongIndex = m_songCount - 1;
    } else {
        m_currentSongIndex--;
    }

    emit currentSongIndexChanged();
}

void PlayerController::playPause()
{
    m_playing = !m_playing;
    emit playingChanged();

    if (m_playing) {
        m_mediaPlayer.play();
    } else {
        m_mediaPlayer.pause();
    }
}

void PlayerController::changeAudioSource(const QUrl &source)
{
    m_mediaPlayer.stop();
    m_mediaPlayer.setSource(source);

    if (m_playing) {
        m_mediaPlayer.play();
    }
}
