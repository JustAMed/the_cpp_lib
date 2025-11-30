#include <iostream>
#include <string>
#include <limits>
#include "book.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main() {
  int identification;
  string name, guy;
  cout << "Book ID: ";
  cin >> identification;
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  cout << "Name of the book: ";
  std::getline(cin, name);

  cout << "Name of the author: ";
  std::getline(cin, guy);

  Book book1(identification, name, guy);

  cout << book1.getTitle() << ", by " << book1.getAuthor();
  cout << ", ID " << book1.getId() << "." << endl;

  return 0;
}
