#include <iostream>

#include "advancemediaplayer.h"

void VlcPlayer::playMp4(const std::string& fileName)
{}

void VlcPlayer::playVlc(const std::string& fileName)
{
	std::cout << "Playing vlc file. Name: " << fileName << std::endl;
}

void Mp4Player::playMp4(const std::string& fileName)
{
	std::cout << "Playing mp4 file. Name: " << fileName << std::endl;
}

void Mp4Player::playVlc(const std::string& fileName)
{}