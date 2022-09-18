#include <iostream>

#include "robotengineer.h"
#include "robotbuilder.h"

int main()
{
	IRobotBuilder* oldRobotBuilder = new OldRobotBuilder();
	RobotEngineer* robotEngineer = new RobotEngineer(oldRobotBuilder);
	robotEngineer->makeRobot();

	Robot* robot = robotEngineer->getRobot();

	std::cout << "-------- Robot Built --------" << std::endl;
	std::cout << "Robot Head Type : " << robot->getHead() << std::endl;
	std::cout << "Robot Torso Type : " << robot->getTorso() << std::endl;
	std::cout << "Robot Arms Type : " << robot->getArms() << std::endl;
	std::cout << "Robot Legs Type : " << robot->getLegs() << std::endl;
	return 0;
}