#ifndef COMPUTER_FACTORY_HPP
#define COMPUTER_FACTORY_HPP

#include "computer.h"

class ComputerFactory
{
public:
	IComputer* createComputer(const std::string& computerType) const;
}; // ComputerFactory

#endif // COMPUTER_FACTORY_HPP