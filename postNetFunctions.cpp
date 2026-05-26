#include "postNetFunctions.h"

string encodeDigit(char digit)
{
  if (digit == '0') {
    return "11000";
  } else if (digit == '1') {
    return "00011";
  } else if (digit == '2') {
    return "00101";
  }
}