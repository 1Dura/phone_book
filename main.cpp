#include "personClass.hpp"
#include <iostream>

int main() {
  person p1;
  person p2("John", "Clark", 79157617240);
  std::cout << p2.getFirstName();
}
