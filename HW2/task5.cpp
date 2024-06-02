#include <iostream>

int main(void)
{
	int a, b = 1;
	std::cin >> a;
	while (a > 0)
	{
		b *= a % 10;
		a /= 10;
	}
	std::cout << b << std::endl;
	return 0;
}