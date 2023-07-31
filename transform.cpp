#include <iostream>
#include <string>

std::string Base10ToBase2(int decimalNumber) {
  std::string baseNumber = "";
  if (decimalNumber == 0) {
    baseNumber = "0";
  }
  while (decimalNumber > 0) {
    int remainder = decimalNumber % 2;
    char baseDigit;
    if (remainder < 10) {
      baseDigit = remainder + '0';
    } else {
      baseDigit = remainder + 55;
    }
    baseNumber = baseDigit + baseNumber;
    decimalNumber = decimalNumber / 2;
  }
  return baseNumber;
}