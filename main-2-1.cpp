#include <iostream>
using namespace std;
extern string month_lookup(int month);
int main(){
    cout << month_lookup(10) << endl;
    cout << month_lookup(3) << endl;
    cout << month_lookup(-1) << endl;
    return 0;
}