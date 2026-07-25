#include "personClass.hpp"
#include <vector>

class PhoneBook {
private:
  std::vector<Person> book;

public:
  PhoneBook();
  void add(Person p);
  void remove(size_t id);
  int findByNumber(long long pNumber) const;
  int findByFirstName(const std::string &name) const;
  int findBySecondName(const std::string &name) const;
  void printPerson(size_t id) const;
  void printAll() const;
};