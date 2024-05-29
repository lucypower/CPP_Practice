#include <iostream>

int DoubleNumber(int a)
{
	return a * 2;
}

int main()
{
	int num{};
	std::cout << "Enter a number: ";
	std::cin >> num;

	std::cout << num << " doubled is: " << DoubleNumber(num);

	return 0;
}