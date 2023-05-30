#include "../include/simpleThread.h"
#include <iostream>
#include <thread>

void HelloWorld()
{
	std::cout << "Hello World." << std::endl;
}

void PrintHelloWorld()
{
	std::thread myThread(HelloWorld);
	auto num = std::thread::hardware_concurrency();
	std::cout <<"hardware_concurrency: " << num << std::endl;
	std::cout << "thread id: " << myThread.get_id() << std::endl;
	if (myThread.joinable())
	{
		myThread.join();
	}
}