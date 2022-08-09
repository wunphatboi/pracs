#include <iostream>
using namespace std;
int main(){
    int var = 42;
    int *ptr;
    ptr = &var;
    cout << ptr+5 << endl;
    cout << ptr+3 << endl;
    return 0;
}