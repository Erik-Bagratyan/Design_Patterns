#ifndef COMPUTER_HPP
#define COMPUTER_HPP

class IComputer
{
public:
	virtual void getComponentsInfo() = 0;
}; // IComputer


class PC : public IComputer
{
public:
	PC();

public:
	void getComponentsInfo() override;

private:
	std::string m_CPU;
	std::string m_RAM;
	std::string m_HDD;
}; // PC

class Server : public IComputer
{
public:
	Server();

public: 
	void getComponentsInfo() override;

private:
	std::string m_CPU;
	std::string m_RAM;
	std::string m_HDD;
}; // Server

class SuperComputer : public IComputer
{
public:
	SuperComputer();

public:
	void getComponentsInfo() override;

private:
	std::string m_CPU;
	std::string m_RAM;
	std::string m_HDD;
}; // SuperComputer

#endif // COMPUTER_HPP
