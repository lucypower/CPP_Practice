#include <iostream>

int GetValueFromUser()
{
	std::cout << "Enter an integer: ";

	int input{};

	std::cin >> input;

	return input;
}

int main()
{
	int num{ GetValueFromUser() };

	std::cout << num << " double is: " << num * 2 << '\n';

	return 0;
}

