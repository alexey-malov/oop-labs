// Hello.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char* argv[])
{
	std::string name;
	if (argc > 1)
	{
		name = argv[1];
	}
	else
	{
		std::cout << "What is your name? ";
		std::getline(std::cin, name);
	}

	std::cout << "Hello " << name << "\n";
	return 0;
}

