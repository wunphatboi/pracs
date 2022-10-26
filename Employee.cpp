#include "Employee.h"
Employee::Employee(){};

Employee::Employee(int p){
    payRate = p;
};

void Employee::takeABreak(int mins){
    while (energyLevel <= 100){
    for (int i = 0; i < mins; i++){
        energyLevel = energyLevel + 2;
        if (energyLevel = 80){
            mins = mins + 2;
            energyLevel = 84;
        }
    }
    }
};

void Employee::set_payRate(int p){
    payRate = p;
};
int Employee::get_payRate(){
    return payRate;
};
void Employee::set_energyLevel(float e){
    energyLevel = e;
};
float Employee::get_energyLevel(){
    return energyLevel;
};
