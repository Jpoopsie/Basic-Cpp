/*Ввести два числа и вывести их в порядке возрастания.*/

#include <iostream>

int main(void)
{
	int a, b;
	std::cin >> a >> b;
	std::cout << std::min(a, b) << ' ' << std::max(a, b) << std::endl;
	return 0;
}