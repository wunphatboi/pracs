#ifndef CASUAL_H
#define CASUAL_H
#include <iostream>
#include "Employee.h"
class Casual: public Employee{
    private:
    int dayCount;
    float hoursWorked[7];
    public:
    Casual();
    Casual(int payRate);
    void endWorkDay();
    void set_dayCount(int d);
    int get_dayCount();
    virtual void work(int mins);
    virtual float pay();
};
#endif