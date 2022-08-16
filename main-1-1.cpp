#include <iostream>
#include <string.h>
using namespace std;
extern void string_2d_copy(string first[3][2], string second[3][2], int);
int main(){
    string myarray[3][2] = {{ "hello", "jack"},{ "dawson", "hello"},{ "hello", "hello" }};
    string secarray[3][2];
    string_2d_copy(myarray,secarray,3);
    return 0;
}