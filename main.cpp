#include <iostream>
#include <string>
// #include <vector>
// #include "include/book.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;
// using std::vector;

int main() {
  // init
  // vector<Book> library;

  //menu
  while (true) {
    int choice;
    cout << "******************** THE C++ LIBRARY ***************" << endl;
    cout << "1. Add book" << endl << "2. Remove Book" << endl;
    cout << "3. Edit Book" << endl << "4. Borrow/Return book" << endl;
    cout << "Else: Exit" << endl << "Input: ";

    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Book de add";
        break;
      case 2:
        cout << "Book de remove";
        break;
      case 3:
        cout << "Book de edit";
        break;
      case 4:
        cout << "Book de borrow/return";
        break;
      default:
        cout << "de exit";
        return 0;
    }
  }
  
  return 0;
}
