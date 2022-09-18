#include <iostream>
#include <thread>
#include <mutex>

#include "singletone.h"

void main_of_other_thread()
{
	std::cout << "-------- Running of other thread --------" << std::endl;
	Singletone::get_instance();
}

int main()
{
	std::cout << "-------- Running main thread --------" << std::endl;
	Singletone::get_instance();
	std::thread my_thread(main_of_other_thread);
	my_thread.join();
	return 0;
}