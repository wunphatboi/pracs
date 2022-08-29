#include <iostream>
#include <Airplane.h>
#include <Person.h>
using namespace std;
Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
        thePilot = thePilot;
        theCoPilot = theCoPilot;
        callsign = callsign;
    }
    void Airplane::setPilot(Person thePilot){
        thePilot= thePilot;
    }      
    Person Airplane::getPilot(){
        return thePilot;
    }
    void Airplane::setCoPilot(Person theCoPilot){
        theCoPilot = theCoPilot;
    } 
    Person Airplane::getCoPilot(){
        return theCoPilot;
    }
    void Airplane::printDetails(){
        cout << callsign << endl;
        cout << thePilot.getPilot() << endl;
        cout << theCoPilot.getCoPilot() << endl;
    }   