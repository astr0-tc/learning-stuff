#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
  
  ifstream inputFile;
  string iFile;
  string oFile;
  
  cout << "What is your input file?" << endl;
  cin  >> iFile;
  cout << "What is the name of your new file?" << endl;
  cin >> oFile;
  
  ofstream outputFile(oFile);

  if(!outputFile.is_open()) {
    cerr << "Failed to open the file!" << endl;
    return 1;
  }

  inputFile.open(iFile);

  if (!inputFile.is_open()) {
    cerr << "Failed to open the file!" << endl;
    return 1;
  }

  string line;
  while (getline(inputFile, line)) {
    outputFile << line << endl;
  }

  inputFile.close();
  outputFile.close();

  cout << "Complete!" << endl;
  return 0;
}
