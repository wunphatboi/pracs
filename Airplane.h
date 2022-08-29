#include <iostream>
#include <Person.h>
using namespace std;
class Airplane{
    private:
    Person thePilot;
    Person theCoPilot;
    string callsign;
    public:
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);      
    Person getPilot();
    void setCoPilot(Person theCoPilot);  
    Person getCoPilot();
    void printDetails();        
};