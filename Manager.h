#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "Employee.h"
class Manager: public Employee{
    private:
    float hoursWorked;                     
    int daysWorked;   
    public:
    Manager();
    Manager(int payRate);
    void set_hoursWorked(float w);
    void set_daysWorked(int d);
    float get_hoursWorked();
    int get_daysWorked();
    virtual void work(int mins);
    virtual float pay();
};
#endif