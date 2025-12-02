#include "include/book.h"
#include <iostream>
#include <string>
using std::string;

Book::Book(int id, const string& title, const string& author) 
    : id(id), title(title), author(author) {}

int Book::getId() const {
      return id;
    }
string Book::getAuthor() const {
  return author;
}

string Book::getTitle() const {
  return title;
}

bool Book::isBorrowed() const {
  return borrowed;
}

// borrow it
void Book::borrow() {
  if (borrowed == true) {
    std::cout << "That's already borrowed";
  }
  else {
    borrowed = true;
    std::cout << "Borrowed!";
  }
}

void Book::returnBook() {
  if (borrowed == false) {
    std::cout << "... why are you returning a returned book?";
  }
  else {
    borrowed = false;
    std::cout << "Returtned!";
  }
  borrowed = false;
}
