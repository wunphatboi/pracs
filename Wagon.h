#include <iostream>
#include "Capybara.h"
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
