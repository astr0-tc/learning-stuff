#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int input;
  bool prime = true;
  
  cout << "Enter a number!" << endl;
  cin >> input;

  if (input == 1) 
  {
    prime = false;
  } 
  if (input == 2)
  {
    prime = true;
  } else {
    if (input % 2 == 0)
    {
      prime = false;
    }
  }
  
  if (prime == true)
  {
    cout << "That's a Prime!" << endl;
    return 0;
  } else {
    cout << "That's not a Prime!" << endl;
    return 0;
  }
}
