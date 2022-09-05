#include <iostream>
#include "Musician.h"
using namespace std;
int main(){
    Musician Ramin("violin",20);
    cout << Ramin.get_experience() << endl;
    cout << Ramin.get_instrument() << endl;
    return 0;
}