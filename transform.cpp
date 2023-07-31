#include <iostream>
#include <string>

std::string Base10ToBase2(int decimalNumber) {
  std::string baseNumber = "";
  if (decimalNumber == 0) {
    baseNumber = "0";
  }
  while (decimalNumber > 0) {
    int remainder = decimalNumber % 2;
    char baseDigit = (remainder < 10) ? (remainder + '0') : (remainder + 55);
    baseNumber = baseDigit + baseNumber;
    decimalNumber = decimalNumber / 2;
  }
  return baseNumber;
}

int main() {
  int decimalNumber;

  std::cout << "Enter a decimal number: ";
  std::cin >> decimalNumber;

  std::string binaryNumber = Base10ToBase2(decimalNumber);

  std::cout << "Binary representation: " << binaryNumber << std::endl;

  return 0;
}