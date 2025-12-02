#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }

int main() {
  int a = 10;
  int b = 20;
  int c = sum(a, b);
  cout << "Sum: " << c << endl;
  return 0;
}