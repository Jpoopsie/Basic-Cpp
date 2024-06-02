/*На вход подается произвольное трехзначное число, напечать произведение цифр*/

#include <iostream>

int main(void)
{
	int a;
	std::cin >> a;
	std::cout << ((a / 100) * (a / 10 % 10) * (a % 10)) << std::endl;
	return 0;
}