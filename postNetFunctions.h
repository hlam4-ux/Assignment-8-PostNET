#pragma once
#include <string>

using namespace std;

string encodeDigit(char digit);

int getCheckDigit(string zip);

string makePostNet(string zip);