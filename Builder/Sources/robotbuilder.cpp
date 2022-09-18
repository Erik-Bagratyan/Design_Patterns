#include "robotbuilder.h"
#include "robot.h"

OldRobotBuilder::OldRobotBuilder()
{
	m_oldRobot = new Robot();
}

void OldRobotBuilder::buildHead()
{
	m_oldRobot->setHead("Steel Head");
}

void OldRobotBuilder::buildTorso()
{
	m_oldRobot->setTorso("Polylactic Acid (PLA) Torso");
}

void OldRobotBuilder::buildArms()
{
	m_oldRobot->setArms("Cylindrical Arms");
}

void OldRobotBuilder::buildLegs()
{
	m_oldRobot->setLegs("Roller Skates");
}

Robot* OldRobotBuilder::getRobot()
{
	return m_oldRobot;
}