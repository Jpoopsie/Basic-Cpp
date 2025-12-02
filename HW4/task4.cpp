#include <iostream>
using namespace std;

bool isEven(int n) {
  if (n % 2 == 0)
    return true;
  else
    return false;
}

int main() {
  int n;
  cout << "Enter count: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (isEven(i))
      cout << i << " → even" << endl;
    else
      cout << i << " → odd" << endl;
  }
  return 0;
}