#ifndef MEDIA_PALYER_HPP
#define MEDIA_PALYER_HPP

#include <string>

#include "advancemediaplayer.h"

class IMediaPlayer
{
public:
	virtual void play(const std::string&, const std::string&) = 0;
}; // IMediaPlayer


class MediaAdapter : public IMediaPlayer
{
public:
	MediaAdapter(const std::string&);

public:
	void play(const std::string&, const std::string&) override;

private:
	IAdvanceMediaPlayer* m_advanceMediaPlayer;
}; // MediaPlayer

class AudioPlayer : public IMediaPlayer
{
public:
	void play(const std::string&, const std::string&) override;

private:
	MediaAdapter* m_mediaAdapter;
}; // AudioPlayer

#endif // MEDIA_PALYER_HPP