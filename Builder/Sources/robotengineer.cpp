#include "robotengineer.h"
#include "robotbuilder.h"

RobotEngineer::RobotEngineer(IRobotBuilder* robotBuilder)
{
	m_robotBuilder = robotBuilder;
}

void RobotEngineer::makeRobot()
{
	m_robotBuilder->buildHead();
	m_robotBuilder->buildTorso();
	m_robotBuilder->buildArms();
	m_robotBuilder->buildLegs();
}

Robot* RobotEngineer::getRobot() const
{
	return m_robotBuilder->getRobot();
}