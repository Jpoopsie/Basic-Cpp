/*B4 Урок 5 ДЗ 2
Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Данные на входе:	Целое положительное число
Данные на выходе:	Одно слово: YES или NO

Пример №1
Данные на входе:	123
Данные на выходе:	YES

Пример №2
Данные на входе:	1234
Данные на выходе:	NO */

#include <iostream>

int main(void)
{
	int a, count = 0;
	std::cin >> a;
	for (int i = a; i > 0; i /= 10)
		count++;
	count == 3 ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
	return 0;
}