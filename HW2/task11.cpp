/*На вход подается произвольное трехзначное число, напечать сумму цифр*/

#include <iostream>

int main(void)
{
	int a;
	std::cin >> a;
	std::cout << "sum = " << (a / 100 + a / 10 % 10 + a % 10);
	return 0;
}