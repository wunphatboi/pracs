#include <iostream>
#include "Wagon.h"
#include "Capybara.h"
using namespace std;
class Wagon{
    private:
    int counts;
    public:
    Capybara w[5];
    Wagon(){
        counts = 0;
    }                            
    bool addCapybara(Capybara newCapy){
        w[counts] = newCapy;
        if (counts == 4){
            cout << "cart is full" << endl;
            return false;
        }else{
            counts = counts +1;
            return true;
        }
    }    
    void emptyWagon(){
        for(int i=0;i<counts;i++){
            w[i].~Capybara();
            counts=0;
            }
    }                  
    void printCapybaras(){
        for (int i = 0; i < counts; i++){
            cout << getName.w[i] << " " << getAge.w[i] << endl;
        }
    } 
};