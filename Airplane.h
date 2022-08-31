#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
#include "Person.h"
using namespace std;
class Airplane{
    private:
    Person Pilot;
    Person CoPilot;
    string csign;
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