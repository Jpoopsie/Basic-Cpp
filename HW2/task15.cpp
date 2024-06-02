/*Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.*/

#include <iostream>

int main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a < b && b < c)
		std::cout << "YES\n";
	else
		std::cout << "NO\n";
	return 0;
}