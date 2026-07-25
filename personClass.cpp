#include "PersonClass.hpp"

Person::Person() : firstName("None"), secondName("None"), phoneNumber(-1) {}
Person::Person(const std::string &fName, const std::string &sName)
    : firstName(fName), secondName(sName), phoneNumber(-1) {}

Person::Person(const std::string &fName, const std::string &sName,
               long long pNumber)
    : firstName(fName), secondName(sName), phoneNumber(pNumber) {}

void Person::print() const {
  std::cout << firstName << " " << secondName << " " << phoneNumber << '\n';
}