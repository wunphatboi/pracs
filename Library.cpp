#include <iostream>
#include <string>
#include "Book.h"
using namespace std;
class Libary{
    public:
    string book1 = "Harry Potter";
    string book2 = "Game of Thrones";
    bool checkStock(Book b1.name){
        for (int i = 0; i < sizeof(b1) << i ++){
        if (b1[i] == book1[i] || book2[i]){
            cout << "no stock" << endl;
            return false;
        }else{
            cout << "there is stock" << endl;
            return true;
        }
        }

    }

};