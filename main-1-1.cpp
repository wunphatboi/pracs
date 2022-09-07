#include <iostream>
#include "Cage.h"
using namespace std;
int main(){
    Cage();
    Cage c1("buddy",20);
    cout << c1.get_name() << endl;
    cout << c1.get_IDnum() << endl;
    return 0;
}