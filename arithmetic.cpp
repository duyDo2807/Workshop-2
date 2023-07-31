#include <iostream>
#include <string>

std::string add(std::string a, std::string b) {
  int carry = 0;
  std::string result = "";
  int i = a.length() - 1;
  int j = b.length() - 1;

  while (i >= 0 || j >= 0 || carry > 0) {
    int sum = carry;

    if (i >= 0) {
      sum = sum + (a[i] - '0');
      i--;
    }

    if (j >= 0) {
      sum = sum + (b[j] - '0');
      j--;
    }

    result = char(sum % 2 + '0') + result;
    carry = sum / 2;
  }

  return result;
}

int main() {
  std::string a, b;
  std::cout << "Enter two binary numbers: ";
  std::cin >> a >> b;

  std::string addition = add(a, b);

  std::cout << "String a + String b = " << addition << std::endl;

  return 0;
}