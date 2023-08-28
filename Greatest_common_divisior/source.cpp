#include <iostream>

int main() {

  unsigned int a, b;

  // user input
  std::cout << "Please enter two integers\n";
  std::cin >> a;
  std::cin >> b;

  // preparing for Euclidean algorithm
  // determine wich input is the greater interger
  if (a < b) {
    unsigned int swap;
    swap = a;
    a = b;
    b = swap;
  }

  // Euclidean algorithm
  unsigned int gcd;
  while (b != 0) {
    gcd = b;
    b = a % b;
    a = gcd;
  }

  std::cout << "\nThe greatest common divisor is " << gcd << std::endl;
}
