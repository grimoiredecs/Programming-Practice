#include <iostream>
#include <string>

std::string highAndLow(const std::string &numbers) {
  int *numArray = new int[numbers.length()];

  for (int i = 0; i < numbers.size();) {
    if (numbers[i] == ' ') {
      i++;
      continue;
    } else {
      numArray[i] = numbers[i] - '0';
    }
  }
  int min = 2147483647;
  int max = 0;
  for (int i = 0; i < numbers.size(); i++) {
    if (numArray[i] < min) {
      min = numArray[i];
    }
    if (numArray[i] > max) {
      max = numArray[i];
    }
    std::cout << numArray[i] << std::endl;
  }
  std::string result = std::to_string(max) + " " + std::to_string(min);
  delete[] numArray;
  return result;
}
int main() {
  std::string numbers = "1 2 3 4 5";
  std::cout << highAndLow(numbers) << std::endl;
  return 0;
}