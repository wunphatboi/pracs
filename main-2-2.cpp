#include <iostream>
#include "Airplane.h"
using namespace std;
int main(){
    Person p1(1000,"oliver");
    Person p2(100,"abby");
    Person p3(10,"mason");
    Airplane A("maverick", p1, p2);
    A.setPilot(p3); 
    A.setCoPilot(p1);
    A.printDetails();
    return 0;
}