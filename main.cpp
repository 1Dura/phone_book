#include "personClass.hpp"
#include <iostream>
#include <list>
#include <string>

int main() {
  const std::string welcomeText = "Welcome to phone book! \nUse can use "
                                  "commands:\n/show\n/add\n/remove\n/exit\n";
  std::list<person> book;
  while (true) {
    std::cout << welcomeText;
    std::string command;
    std::cin >> command;
    if (command == "/show") {
      for (auto p : book) {
        p.print();
      }
    } else if (command == "/add") {
      std::string fName;
      std::string sName;
      long long pNumber = -1;
      std::cout << "Enter first name: ";
      std::cin >> fName;
      std::cout << "Enter second name: ";
      std::cin >> sName;
      std::cout << "Enter phone number: ";
      std::cin >> pNumber;
      book.push_back(person(fName, sName, pNumber));
    } else if (command == "/exit") {
      break;
    }
    // else if (command == "/remove") {
    //   size_t id;
    //   std::cout << "Enter id you want remove: ";
    //   std::cin >> id;
    // }
  }
}
