#include <iostream>

int main() {
  unsigned int a, b;

  std::cout << "Please enter two integers\n";
  std::cin >> a;
  std::cin >> b;

  if (a < b) {
    unsigned int swap;
    swap = b;
    b = a;
    a = swap;
  }

  unsigned int lcm = 2;
  while (a % lcm != 0 || b % lcm != 0 && lcm > b) {
    lcm++;
  }

  std::cout << "\nThe least common multiple is: " << lcm << std::endl;
}
