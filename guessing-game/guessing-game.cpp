#include <iostream>
#include <random>

using namespace std;

int main() {
  
  int input;
  random_device rd;
  mt19937 gen(rd());
  
  bool guessing = true;
  uniform_int_distribution<int> distribution(1, 10);
  int random_int = distribution(gen);

  while(guessing)
  {
    cout << "What number am I thinking of?" << endl;
    cin >> input;
    if(input > random_int) {
      cout << "That's too high!" << endl;
    }
    else if(input < random_int) {
      cout << "That's too low!" << endl;
    }
    else {
      cout << "That's correct!" << endl;
      guessing = false;
    }
  }
}
