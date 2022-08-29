#include <iostream>
#include <string>
using namespace std;
class Book{
    private:
    string name;
    string author;
    int ID;
    public:
    void setBookName(string bookn){
        name = bookn;
    }
    string getBookName(){
        return name;
    }
    void setAuthName(string authn){
        author = authn;
    }
    string getAuthName(){
        return author;
    }
    void setBookID(int bID){
        ID = bID;
    }
    int getBookID(){
        return ID;
    }
};