/*B14 Практика 3
Посчитать числа
Дана последовательность ненулевых целых чисел, в конце последовательности число 0.
Подсчитать количество чисел.

Данные на входе:	Целые ненулевые числа. В конце последовательности ноль. Ноль в последовательность не входит.
Данные на выходе:	Одно целое число - количество чисел в последовательности.

Пример №1
Данные на входе:	15 22 2 4 1 6 0
Данные на выходе:	6

Пример №2
Данные на входе:	27 1 3 7 0
Данные на выходе:	4 */

#include <iostream>

int main(void)
{
	int a, count = 0;
	while (std::cin >> a)
	{
		if (a == 0)
			break;
		count++;
	}
	std::cout << count << std::endl;
	return 0;
}