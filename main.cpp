#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!\n";
  int number1 = 0;
  int number2 = 0;
  std::cout << "Enter the first number: ";
  std::cin >> number1;
  std::cout << "Enter the second number: ";
  std::cin >> number2;
  
  int sum = number1 + number2;// add
  std::cout << "Sum is " << sum << std::endl;
}