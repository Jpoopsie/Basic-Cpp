/*Напечатать сумму максимума и минимума.*/

#include <iostream>

int main(void)
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	int max = std::max(a, std::max(b, std::max(c, std::max(d, e))));
	int min = std::min(a, std::min(b, std::min(c, std::min(d, e))));
	std::cout << max + min << std::endl;
	return 0;
}