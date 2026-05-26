#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#include "postNetFunctions.h"

int main()
{
  ifstream inFile("input.txt");
  ofstream outFile("output.txt");

  string zip;

  cout << "Enter zip code";
  cin >> zip;

  cout << makePostNet(zip) << endl;

  return 0;
}
