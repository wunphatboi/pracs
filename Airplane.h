#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
#include "Person.h"
using namespace std;
class Airplane{
    private:
    Person thePilot;
    Person theCoPilot;
    string callsign;
    public:
    Airplane();
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);      
    Person getPilot();
    void setCoPilot(Person theCoPilot);  
    Person getCoPilot();
    void printDetails();        
};
#endif