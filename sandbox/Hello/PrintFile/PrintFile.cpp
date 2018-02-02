// PrintFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	std::ifstream inputFile;
	inputFile.open("PrintFile.cpp");

	std::ofstream outputFile;
	outputFile.open("output.txt");

	char ch;
	while (inputFile.get(ch))
	{
		outputFile.put(ch);
	}

	return 0;
}

