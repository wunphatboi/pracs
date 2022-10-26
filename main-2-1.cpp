#include "Casual.h"
#include <iostream>
using namespace std;
int main(){
    Casual c(20);
    c.set_energyLevel(50);
    c.work(20);
    cout << c.get_energyLevel() << endl;
    return 0;
}