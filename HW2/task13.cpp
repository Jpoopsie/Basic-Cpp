/*Дано трехзначное число, напечатать макисмальную цифру*/

#include <iostream>

int main(void)
{
	int a;
	std::cin >> a;
	std::cout << std::max(a / 100, std::max(a / 10 % 10, a % 10)) << std::endl;
	return 0;
}