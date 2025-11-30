#ifndef BOOK_H
#define BOOK_H

#include <string>
using std::string;

class Book {
    private:
      // define a book's ID, and it's author/title. Use the ID for search.
      int id;
      string title;
      string author;
      bool borrowed;

    public:
      // gotta make a Book
      Book(int id, const string& title, const string& author); 

      // info on da Book
      int getId() const;
      string getAuthor() const;
      string getTitle() const;
      bool isBorrowed() const;
      // borrow it
      void borrow();
      void returnBook();
  };
#endif
