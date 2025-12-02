#include <iostream>
using namespace std;

long long factorial(int n) {
  long long res = 1;
  for (int i = 1; i <= n; i++) {
    res *= i;
  }
  return res;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  if (n < 0) {
    cout << "Error: negative number!" << endl;
    return 1;
  } else {
    long long result = factorial(n);
    cout << n << "! = " << result << endl;
    return 0;
  }
}