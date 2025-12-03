#include <cstdlib>
#include <ctime>
#include <iostream>

int random_number() { return rand() % 100 + 1; }

int main() {
  srand(time(NULL));
  int x = random_number();
  int i = 0;
  char a;
  do {
    int attempt = 1;
    std::cout << "=== ИГРА 'УГАДАЙ ЧИСЛО' ===" << std::endl;
    std::cout << "Я загадал число от 1 до 100. У тебя 7 попыток!" << std::endl;
    for (; attempt <= 7; attempt++) {
      std::cout << "Попытка " << attempt << ": ";
      std::cin >> i;
      std::cout << std::endl;
      if (i < x)
        std::cout << "Слишком мало!" << std::endl;
      else if (i > x)
        std::cout << "Слишком много!" << std::endl;
      else {
        std::cout << "Угадал за " << attempt << " попытки! Круто!";
        std::cout << std::endl;
        break;
      }
    }
    if (i == x) {
      std::cout
          << "Поздравляю, вы выиграли! Хотите повторить игру? Y - Да. N - Нет."
          << std::endl;
      std::cin >> a;
    } else {
      std::cout << "Вы проиграли! Число было: " << x << std::endl;
      std::cout << "Начать новую игру? Y - Да. N - Нет." << std::endl;
      std::cin >> a;
    }
  } while (a == 'Y' || a == 'y');
  return 0;
}