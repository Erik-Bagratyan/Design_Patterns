#include <iostream>

#include "computer.h"

PC::PC()
	:	m_CPU("Intel Core i9-10980XE Extreme Edition")
	,	m_RAM("8 GB")
	,	m_HDD("500 GB")
{}

void PC::getComponentsInfo()
{
	std::cout << "\tParameters for PC\n"
			  << "CPU : " << m_CPU << std::endl
			  << "RAM : " << m_RAM << std::endl
			  << "HDD : " << m_HDD << std::endl;
}

Server::Server()
	: m_CPU("Intel Xeon W-2223 Cascade Lake 3.6 GHz LGA 2066 120W BX80695W2223")
	, m_RAM("64 GB")
	, m_HDD("1.68 TB")
{}

void Server::getComponentsInfo()
{
	std::cout << "\tParameters for Server\n"
			  << "CPU : " << m_CPU << std::endl
			  << "RAM : " << m_RAM << std::endl
			  << "HDD : " << m_HDD << std::endl;
}

SuperComputer::SuperComputer()
	: m_CPU("SPARC64 VIIIfx")
	, m_RAM("256 GB")
	, m_HDD("2.05 PB")
{}

void SuperComputer::getComponentsInfo()
{
	std::cout << "\tParameters for Super Computer\n"
		<< "CPU : " << m_CPU << std::endl
		<< "RAM : " << m_RAM << std::endl
		<< "HDD : " << m_HDD << std::endl;
}