/*Ввести пять чисел и найти  наименьшее из них.*/

#include <iostream>

int main(void)
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	std::cout << std::min(a, std::min(b, std::min(c, std::min(d, e)))) << std::endl;
	return 0;
}