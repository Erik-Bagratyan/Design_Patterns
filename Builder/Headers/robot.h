#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <string>

class IRobotPlane
{
public:
	virtual void setHead(const std::string& head)   = 0;
	virtual void setTorso(const std::string& torso) = 0;
	virtual void setArms(const std::string& arms)   = 0;
	virtual void setLegs(const std::string& legs)   = 0;
}; // RobotPlane


class Robot : public IRobotPlane
{
public:
	std::string getHead() const;
	std::string getTorso() const;
	std::string getArms() const;
	std::string getLegs() const;

	void setHead(const std::string&)  override;
	void setTorso(const std::string&) override;
	void setArms(const std::string&)  override;
	void setLegs(const std::string&)  override;

private:
	std::string m_head;
	std::string m_torso;
	std::string m_arms;
	std::string m_legs;
}; // Robot


#endif // ROBOT_HPP
