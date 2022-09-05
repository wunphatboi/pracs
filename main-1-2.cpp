#include <iostream>
#include "Orchestra.h"
using namespace std;
int main(){
    Orchestra O1(3);
    Musician Ramin("violin",20);
    Musician George("piano",10);
    O1.add_musician(Ramin);
    O1.add_musician(George);
    O1.get_current_number_of_members();
    return 0;
}
