#include <iostream>
#include <string>
using namespace std;

#include "postNetFunctions.h"

int main()
{
  string zip;

  cout << "Enter zip code";
  cin >> zip;

  cout << makePostNet(zip) << endl;

  return 0;
}
