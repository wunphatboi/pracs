#include "Manager.h"
Manager::Manager(){};
Manager::Manager(int payRate):Employee(payRate){}; 
void Manager::set_hoursWorked(float w){
    hoursWorked = w;
};
void Manager::set_daysWorked(int d){
};
float Manager::get_hoursWorked(){
    return hoursWorked;
};
int Manager::get_daysWorked(){
    return daysWorked;
};
void Manager::work(int mins){
    while (energyLevel > 1){
        if (mins == 60*8){
            daysWorked++;
            hoursWorked = 0;
            energyLevel = 100;
        }
    for (int i = 0; i < mins; i++){
        energyLevel = energyLevel - 0.25;
    };
    };
};
float Manager::pay(){
   return daysWorked*(payRate*60*8);
};