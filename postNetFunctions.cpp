#include "postNetFunctions.h"

string encodeDigit(char digit)
{
  if (digit == '0') {
    return "11000";
  } else if (digit == '1') {
    return "00011";
  } else if (digit == '2') {
    return "00101";
  } else if (digit == '3') {
    return "00110";
  } else if (digit == '4') {
    return "01001";
  } else if (digit == '5') {
    return "01010";
  } else if (digit == '6') {
    return "01100";
  } else if (digit == '7') {
    return "10001";
  } else if (digit == '8') {
    return "10010";
  } else if (digit == '9') {
    return "10100";
  }
}

int getCheckDigit(string zip)
{
  int total = 0;
  for (int i = 0; i < zip.length(); i++) {
    total = total + (zip[i] - '0');
  }
  int checkDigit = 10 - (total % 10);
  if (checkDigit == 10) {
    checkDigit = 0;
  }
  return checkDigit;
}