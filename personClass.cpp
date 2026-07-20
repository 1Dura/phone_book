#include "personClass.hpp"

person::person() {
  this->firstName = "None";
  this->secondName = "None";
  this->phoneNumber = -1;
  // std::cout << "Added empty person!\n";
}
person::person(std::string fName, std::string sName) {
  this->firstName = fName;
  this->secondName = sName;
  this->phoneNumber = -1;
  std::cout << "Added person " << fName << " " << sName
            << " without phone number!\n";
}

person::person(std::string fName, std::string sName, long long pNumber) {
  this->firstName = fName;
  this->secondName = sName;
  this->phoneNumber = pNumber;
  std::cout << "Added person " << fName << " " << sName << " with phone number "
            << pNumber << '\n';
}

void person::print() {
  std::cout << this->firstName << " " << this->secondName << " "
            << this->phoneNumber << '\n';
}