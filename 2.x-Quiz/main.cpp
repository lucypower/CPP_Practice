#include "io.h"

#include <iostream>


int main()
{
	std::cout << "Enter an integer: ";
	int a{ ReadNumber() };

	std::cout << "Enter another integer: ";
	int b{ ReadNumber()};

	WriteAnswer(a + b);

	return 0;
}