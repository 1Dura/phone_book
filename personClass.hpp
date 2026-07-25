#include <iostream>
#include <string>

class Person {
private:
  std::string firstName;
  std::string secondName;
  long long phoneNumber;

public:
  Person();
  Person(const std::string &fName, const std::string &sName);
  Person(const std::string &fName, const std::string &sName, long long pNumber);
  const std::string getFirstName() const { return firstName; }
  const std::string getSecondName() const { return secondName; }
  long long getPhoneNumber() const { return phoneNumber; }
  void print() const;
};