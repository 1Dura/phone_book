#include <iostream>
#include <string>

class person {
private:
  std::string firstName;
  std::string secondName;
  long long phoneNumber;

public:
  person();
  person(std::string fName, std::string sName);
  person(std::string fName, std::string sName, long long pNumber);
  std::string getFirstName() { return firstName; }
  std::string getSecondName() { return secondName; }
};