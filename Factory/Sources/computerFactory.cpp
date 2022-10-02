#include <string>

#include "computerFactory.h"

IComputer* ComputerFactory::createComputer(const std::string& computerType) const
{
	if (computerType == "PC")
		return new PC();
	if (computerType == "Server")
		return new Server();
	if (computerType == "Super")
		return new SuperComputer();
}