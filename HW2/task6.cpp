/*Ввести два числа и вывести их в порядке возрастания.*/

#include <iostream>

int main(void)
{
	int a, b;
	std::cin >> a >> b;
	std::cout << (a < b ? a : b) << ' ' << (a < b ? b : a) << std::endl;
	return 0;
}