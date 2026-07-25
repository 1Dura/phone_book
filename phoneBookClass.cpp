#include "phoneBookClass.hpp"

PhoneBook::PhoneBook() {}

void PhoneBook::add(Person p) { book.push_back(p); }

void PhoneBook::remove(size_t id) {
  for (size_t i = id; i + 1 < book.size(); ++i) {
    book[i] = book[i + 1];
  }
  book.pop_back();
}

int PhoneBook::findByNumber(long long pNumber) const {
  for (size_t i = 0; i < book.size(); ++i) {
    if (book[i].getPhoneNumber() == pNumber)
      return i;
  }
  return -1;
}

int PhoneBook::findByFirstName(const std::string &name) const {
  for (size_t i = 0; i < book.size(); ++i) {
    if (book[i].getFirstName() == name)
      return i;
  }
  return -1;
}
int PhoneBook::findBySecondName(const std::string &name) const {
  for (size_t i = 0; i < book.size(); ++i) {
    if (book[i].getSecondName() == name)
      return i;
  }
  return -1;
}

void PhoneBook::printPerson(size_t id) const { book[id].print(); }
void PhoneBook::printAll() const {
  for (size_t i = 0; i < book.size(); ++i) {
    printPerson(i);
  }
}