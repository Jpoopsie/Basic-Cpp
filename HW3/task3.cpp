/*Ввести три числа и найти наибольшее из них*/

#include <iostream>

int main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << std::max(a, std::max(b, c)) << std::endl;
	return 0;
}