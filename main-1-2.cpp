#include <iostream>
#include "Orchestra.h"
using namespace std;
int main(){
    Orchestra O1(4);
    Musician Person1("violin",20);
    Musician Person2("piano",10);
    O1.add_musician(Person1);
    O1.add_musician(Person2);
    cout << O1.get_current_number_of_members() << endl;
    cout << O1.has_instrument("guitar") << endl;
    O1.~Orchestra();
    return 0;
}
