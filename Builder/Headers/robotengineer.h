#ifndef ROBOT_ENGINEER_HPP
#define ROBOT_ENGINEER_HPP

#include "robotbuilder.h"
#include "robot.h"

class RobotEngineer
{
private:
	IRobotBuilder* m_robotBuilder;

public:
	RobotEngineer(IRobotBuilder*);

	void makeRobot();
	Robot* getRobot() const;
};

#endif // ROBOT_ENGINEER_HPP
