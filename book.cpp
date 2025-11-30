#include "book.h"
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
  borrowed = true;
}

void Book::returnBook() {
  borrowed = false;
}
