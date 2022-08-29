#include <iostream>
#include <string>
using namespace std;
class Book{
    private:
    string name;
    string author;
    int ID;
    public:
    void setBookName(string bookn);
    string getBookName();
    void setAuthName(string authn);
    string getAuthName();
    void setBookID(int bID);
    int getBookID();
};