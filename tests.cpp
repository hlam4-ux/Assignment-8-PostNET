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

TEST_CASE("makePostNet")
{
  CHECK(makePostNet("12345") == "0001100101001100100101010");
  CHECK(makePostNet("35343") == "001100101000110010100110");
}