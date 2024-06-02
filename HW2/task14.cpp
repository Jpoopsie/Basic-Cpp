/*Определить уравнение прямой по координатам двух точек. Уравнение вида y=k*x+b*/

#include <iostream>
#include <iomanip>

int main(void)
{
	float x1, y1, x2, y2;
	float k, b;
	std::cin >> x1 >> y1 >> x2 >> y2;
	k = (y2 - y1) / (x2 - x1);
	b = y1 - k * x1;
	std::cout << std::fixed << std::setprecision(2) << k << " " << b << std::endl;
	return 0;
}