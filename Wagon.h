#ifndef WAGON_H
#define WAGON_H
#include "Capybara.h"
#include <string>
using namespace std;
class Wagon{
    private:
    int counts;
    Capybara w[4];
    public:
    Wagon();                  
    bool addCapybara(Capybara newCapy);
    void emptyWagon();       
    void printCapybaras();
};
#endif
