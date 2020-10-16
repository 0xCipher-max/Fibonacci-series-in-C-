 
#include <iostream>
 
int Fibonacci(int x) {
  if (x < 2){
    return x;
  }
  return (Fibonacci (x - 1) + Fibonacci (x - 2));
}
 
int main(void) {
  int number;
  std::cout << "Please enter a positive integer: ";
  std::cin >> number;
  if (number < 0)
    std::cout << "That is not a positive integer.\n";
  else
    std::cout << number << " Fibonacci is: " << Fibonacci(number) <<  std::endl;
  return 0;
}