/*Ввести пять чисел и найти наибольшее из них.*/

#include <iostream>

int main(void)
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	std::cout << std::max(a, std::max(b, std::max(c, std::max(d, e)))) << std::endl;
	return 0;
}