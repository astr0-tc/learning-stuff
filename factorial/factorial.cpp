#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 1) {
    return 1;
  }
  if (n == 2) {
    return 2;
  }
  else {
    return n * factorial(n - 1);
  }
}

int main() {
  int input;
  int fact;

  cout << "What's your number?" << endl;
  cin >> input;
  if (input < 0) {
    cout << "You cannot compute the factorial of negative numbers" << endl;
  } else {
    fact = factorial(input);
    cout << "The factorial of " << input << " is " << fact << endl;
    return 0;
  }
}
