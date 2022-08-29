#include <iostream>
#include "Capybara.h"
using namespace std;
class Wagon{
    private:
    int counts;
    Capybara w[5];
    public:
    Wagon();                  
    bool addCapybara(Capybara newCapy);
    void emptyWagon();       
    void printCapybaras();
};
