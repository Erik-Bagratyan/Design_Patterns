#include <iostream>
#include <string>

#include "robot.h"

void Robot::setHead(const std::string& head)
{
	m_head = head;
}

void Robot::setTorso(const std::string& torso)
{
	m_torso = torso;
}

void Robot::setArms(const std::string& arms)
{
	m_arms = arms;
}

void Robot::setLegs(const std::string& legs)
{
	m_legs = legs;
}

std::string Robot::getHead() const
{
	return m_head;
}

std::string Robot::getTorso() const
{
	return m_torso;
}

std::string Robot::getArms() const
{
	return m_arms;
}

std::string Robot::getLegs() const
{
	return m_legs;
}