#ifndef ROBOT_BUILDER_HPP
#define ROBOT_BUILDER_HPP

#include "robot.h"

class IRobotBuilder
{
public:
	virtual void buildHead()	= 0;
	virtual void buildTorso()	= 0;
	virtual void buildArms()	= 0;
	virtual void buildLegs()	= 0;

	virtual Robot* getRobot()	= 0;

}; // IRobotBuilder


class OldRobotBuilder : public IRobotBuilder
{
private:
	Robot* m_oldRobot = nullptr;

public:
	OldRobotBuilder();

	void buildHead()  override;
	void buildTorso() override;
	void buildArms()  override;
	void buildLegs()  override;

	Robot* getRobot() override;
};


#endif // ROBOT_BUILDER_HPP
