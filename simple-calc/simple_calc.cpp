#include <iostream>

using namespace std;

int main (){

  int a, b;
  char op;
  cout << "What would you like to do?" << endl;
  cin >> a;
  cin >> op;
  cin >> b;
  if (op == '+'){
    int c = a + b;  
    cout << c << endl;
  }
  if (op == '-'){
    int c = a - b;  
    cout << c << endl;
  }
  if (op == '*'){
    int c = a * b;  
    cout << c << endl;
  }
  if (op == '/'){
    int c = a / b;  
    cout << c << endl;
  }
  if (op == '%'){
    int c = a % b;  
    cout << c << endl;
  }

}
