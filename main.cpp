#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#include "postNetFunctions.h"

int main()
{
  ifstream inFile("input.txt");
  ofstream outFile("output.txt");

  string city;
  string state;
  string zip;

  while (getline(inFile, city, ',') && getline(inFile, state, ',')
         && getline(inFile, zip)) {
    outFile << city << "," << state << " " << zip << endl;
    outFile << makePostNet(zip) << endl;
  }

  return 0;
}
