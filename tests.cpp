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
  CHECK(makePostNet("12345") == "100011001010011001001010010101");
  CHECK(makePostNet("35343") == "1001101010001100100110010001011");
}