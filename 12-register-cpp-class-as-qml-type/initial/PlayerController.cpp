#include "PlayerController.h"

PlayerController::PlayerController(QObject *parent)
    : QObject{parent}
{

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
}
