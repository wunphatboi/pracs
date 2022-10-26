#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
class Employee{
    protected:
    int payRate;
    float energyLevel;
    
    public:
    Employee();
    Employee(int p);
    void takeABreak(int mins);
    virtual void work(int mins) = 0;
    virtual float pay() = 0;
    void set_payRate(int p);
    int get_payRate();
    void set_energyLevel(float e);
    float get_energyLevel();
};
#endif