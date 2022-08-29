#ifndef WAGON_H
#define WAGON_H
#include <iostream>
#include "Capybara.h"
#include "Capybara.cpp"
using namespace std;
class Wagon{
    private:
    int counts;
    public:
    Capybara w[5];
    Wagon();                  
    bool addCapybara(Capybara newCapy);
    void emptyWagon();       
    void printCapybaras();
};
#endif