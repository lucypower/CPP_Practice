#include "io.h"

#include <iostream>

int ReadNumber()
{
	int input;
	std::cin >> input;

	return input;
}

void WriteAnswer(int answer)
{
	std::cout << answer;
}