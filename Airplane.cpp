#include <iostream>
#include "Airplane.h"
using namespace std;
Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
        Pilot = thePilot;
        CoPilot = theCoPilot;
        csign = callsign;
    }
    void Airplane::setPilot(Person thePilot){
        Pilot= thePilot;
    }      
    Person Airplane::getPilot(){
        return Pilot;
    }
    void Airplane::setCoPilot(Person theCoPilot){
        CoPilot = theCoPilot;
    } 
    Person Airplane::getCoPilot(){
        return CoPilot;
    }
    void Airplane::printDetails(){
        cout << csign << endl;
        cout << Pilot.getName() << endl;
        cout << CoPilot.getName() << endl;
    }   
