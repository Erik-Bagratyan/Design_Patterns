#include <iostream>

#include "audioplayer.h"

MediaAdapter::MediaAdapter(const std::string& audioFormat)
{
	if (audioFormat == "mp4")
	{
		m_advanceMediaPlayer = new Mp4Player();
	}
	else if (audioFormat == "vlc") {
		m_advanceMediaPlayer = new VlcPlayer();
	}
}

void MediaAdapter::play(const std::string& audioFormat, const std::string& fileName)
{
	if (audioFormat == "mp4")
	{
		m_advanceMediaPlayer->playMp4(fileName);
	}
	else if (audioFormat == "vlc") {
		m_advanceMediaPlayer->playVlc(fileName);
	}
}

void AudioPlayer::play(const std::string& audioFormat, const std::string& fileName)
{
	if (audioFormat == "mp3")
	{
		std::cout << "Playing mp3 file. Name : " << fileName << std::endl;
		return;
	}
	if (audioFormat == "mp4" || audioFormat == "vlc")
	{
		m_mediaAdapter = new MediaAdapter(audioFormat);
		m_mediaAdapter->play(audioFormat, fileName);
	}
	else 
	{
		std::cout << "Invalid media. " << audioFormat  << "format not supported" << std::endl;
	}
}