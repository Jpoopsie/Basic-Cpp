#include <iostream>
#include <iomanip>

int main(void)
{
	float a, b, c, d;
	std::cin >> a >> b >> c;
	d = (a + b + c) / 3;
	std::cout << std::fixed << std::setprecision(2) << d << std::endl;
	return 0;
}