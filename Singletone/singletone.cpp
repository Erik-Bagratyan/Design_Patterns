#include <iostream>
#include <mutex>

#include "singletone.h"

std::mutex mutex;

Singletone* Singletone :: instance = nullptr;

Singletone* Singletone :: get_instance()
{
	std::lock_guard<std::mutex> lock(mutex);
	if (instance == nullptr)
	{
		std::cout << "Creating new Singletone object" << std::endl;
		instance = new Singletone();
	}
	else
	{
		std::cout << "Returned existing object" << std::endl;
	}
	return instance;
}