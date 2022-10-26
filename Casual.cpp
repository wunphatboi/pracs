#include "Casual.h"

Casual::Casual(){};

Casual::Casual(int payRate):Employee(payRate){}; 

void Casual::endWorkDay(){
    dayCount++;
    energyLevel = 100;
};

void Casual::work(int mins){
    while (energyLevel > 1){
    for (int i = 0; i < mins; i++){
        energyLevel = energyLevel - 0.5;
    };
    };
    if (hoursWorked[dayCount] == 5 || hoursWorked[dayCount] == 6){
        hoursWorked[dayCount] = 2*mins;

    }else{
        hoursWorked[dayCount] = mins;

    }
};

float Casual::pay(){
    float weekPay = 0;
    for (int i = 0; i < 7; i++){
        weekPay = hoursWorked[dayCount];
        weekPay++;
    };
    for (int i = 0; i < 7; i++){
        hoursWorked[dayCount] = 0;
        dayCount++;
    };
    dayCount = 0;
    return weekPay * payRate;
};

void Casual::set_dayCount(int d){
    dayCount = d;

};
int Casual::get_dayCount(){
    return dayCount;
};
