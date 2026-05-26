#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "postNetFunctions.h"

TEST_CASE("encodeDight")
{
  CHECK(encodeDigit('0') == "11000");
  CHECK(encodeDigit('1') == "00011");
  CHECK(encodeDigit('5') == "01010");
  CHECK(encodeDigit('8') == "10010");
}

TEST_CASE("getCheckDigit")
{
  CHECK(getCheckDigit("97301") == 0);
  CHECK(getCheckDigit("12345") == 5);
}