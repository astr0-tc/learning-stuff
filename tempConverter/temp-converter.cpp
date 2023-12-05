#include <iostream>
using namespace std;

struct Temperature {
  double value;

  Temperature(double temp) : value(temp) {}

  void toFahrenheit() {
    value = (value * 1.8) + 32;
  }

  void toCelsius() {
    value = (value - 32) / 1.8;
  }

};



int main () 
{
  char t;
  double initial;

  cout << "What temperature would you like converted? (ex 32 F)" << endl;
  cin >> initial;
  cin >> t;

  if (t == 'F')
  {
    Temperature fahrenheitTemp(initial);
    fahrenheitTemp.toCelsius();
    cout << "The converted temp is: " << fahrenheitTemp.value << " C." << endl;
  }
  if (t == 'C')
  {
    Temperature celsiusTemp(initial);
    celsiusTemp.toFahrenheit();
    cout << "The converted temp is: " << celsiusTemp.value << " F." << endl;
  }
  else
  {
    cout << "That is not a valid temperature!" << endl;
  }
  return 0;
}
