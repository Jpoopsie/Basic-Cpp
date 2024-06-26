/*B3 Урок 5 ДЗ 1
Сумма квадратов маленьких чисел
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.

Данные на входе:	Два целых числа по модулю не больше 100
Данные на выходе:	Сумма квадратов от первого введенного числа до второго

Пример №1
Данные на входе:	4 10
Данные на выходе:	371

Пример №2
Данные на входе:	1 5
Данные на выходе:	55 */

#include <iostream>

int main(void)
{
	int a, b, sum = 0;
	std::cin >> a >> b;
	for (int i = a; i <= b; i++)
		sum += i * i;
	std::cout << sum << std::endl;
	return 0;
}