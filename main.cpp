#include "personClass.hpp"
#include <iostream>
#include <list>
#include <string>

person createRow() {
  std::string fName;
  std::string sName;
  long long pNumber = -1;
  std::cout << "Enter first name: ";
  std::cin >> fName;
  std::cout << "Enter second name: ";
  std::cin >> sName;
  std::cout << "Enter phone number: ";
  std::cin >> pNumber;
  return person(fName, sName, pNumber);
}

int main() {
  const std::string welcomeText = "Welcome to phone book! \nUse can use "
                                  "commands:\n/show\n/add\n/remove\n/exit\n";
  std::list<person> book;
  book.push_back(person("John", "Smith", 8043803235));
  book.push_back(person("Bob", "Doll", 8043803235));
  book.push_back(person("Sam", "Lol", 8043803235));
  while (true) {
    std::cout << welcomeText;
    std::string command;
    std::cin >> command;
    if (command == "/show") {
      int i = 0;
      for (auto row : book) {
        std::cout << i << " -> ";
        row.print();
        ++i;
      }
    } else if (command == "/add") {
      book.push_back(createRow());
    } else if (command == "/exit") {
      break;
    } else if (command == "/remove") {
      size_t id;
      std::cout << "Enter id you want remove: ";
      std::cin >> id;
      auto iter = std::next(book.begin(), id);
      book.erase(iter);
    }
  }
}
