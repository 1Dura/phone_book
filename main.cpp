#include "PersonClass.hpp"
#include <iostream>
#include <list>
#include <string>

Person createPerson() {
  std::string fName;
  std::string sName;
  long long pNumber = -1;
  std::cout << "Enter first name: ";
  std::cin >> fName;
  std::cout << "Enter second name: ";
  std::cin >> sName;
  std::cout << "Enter phone number: ";
  std::cin >> pNumber;
  return Person(fName, sName, pNumber);
}

int main() {
  const std::string welcomeText = "Welcome to phone book! \nUse can use "
                                  "commands:\n/show\n/add\n/remove\n/exit\n";
  std::list<Person> book;
  book.push_back(Person("John", "Smith", 8043803235));
  book.push_back(Person("Bob", "Doll", 8043803235));
  book.push_back(Person("Sam", "Lol", 8043803235));
  while (true) {
    std::cout << welcomeText;
    std::string command;
    std::cin >> command;
    if (command == "/show") {
      int i = 0;
      for (const auto &row : book) {
        std::cout << i << " -> ";
        row.print();
        ++i;
      }
    } else if (command == "/add") {
      book.push_back(createPerson());
    } else if (command == "/exit") {
      break;
    } else if (command == "/remove") {
      size_t id;
      std::cout << "Enter id you want remove: ";
      std::cin >> id;
      if (id >= book.size()) {
        std::cout << "Error! wrong id!\n";
      } else {
        auto iter = std::next(book.begin(), id);
        book.erase(iter);
      }
    }
  }
}
