#include <iostream>

int main () {
  std::cout << "The following line is utf8 encoded :" << std::endl;
  std::cout << (u8"Ὅλοι οἱ ἄνθρωποι γεννιοῦνται ἐλεύθεροι ...") << std::endl;

  return 0;
}
