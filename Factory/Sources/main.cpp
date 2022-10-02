#include <iostream>

#include "computerFactory.h"
#include "computer.h"

int main()
{
	ComputerFactory* computerFactory = new ComputerFactory();
	IComputer* pc_computer = computerFactory->createComputer("PC");
	pc_computer->getComponentsInfo();
	IComputer* server_computer = computerFactory->createComputer("Server");
	server_computer->getComponentsInfo();
	IComputer* super_computer = computerFactory->createComputer("Super");
	super_computer->getComponentsInfo();

	return 0;
}