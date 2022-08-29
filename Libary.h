#include <iostream>
#include <string>
#include "Book.h"
using namespace std;
class Libary{
    public:
    string book1 = "Harry Potter";
    string book2 = "Game of Thrones";
    bool checkStock(Book b1);
    bool returnBook(Book b1);
};