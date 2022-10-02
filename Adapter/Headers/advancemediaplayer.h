#ifndef ADVANCE_MEDIA_PLAYER_HPP
#define ADVANCE_MEDIA_PLAYER_HPP

class IAdvanceMediaPlayer
{
public:
	virtual void playVlc(const std::string&) = 0;
	virtual void playMp4(const std::string&) = 0;
}; // IAdvanceMediaPlayer


class VlcPlayer : public IAdvanceMediaPlayer
{
public:
	void playVlc(const std::string&) override;
	void playMp4(const std::string&) override;
}; // VlcPlayer


class Mp4Player : public IAdvanceMediaPlayer
{
public:
	void playVlc(const std::string&) override;
	void playMp4(const std::string&) override;
}; // Mp4Player


#endif // ADVANCE_MEDIA_PLAYER_HPP