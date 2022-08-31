#include <iostream>
#include "Wagon.h"
using namespace std;
Wagon::Wagon(){
        counts = 0;
    }                            
   bool Wagon::addCapybara(Capybara newCapy){
        if (counts > 3){
            cout << "oops cannot add capybara: " << w[counts].getName() << " of age " << w[counts].getAge() << endl;
            return false;
        }else {
            w[counts] = newCapy;
            counts++;
            return true;
        }  
   }  
    void Wagon::emptyWagon(){
        for(int i=0;i<counts;i++){
            w[i].~Capybara();
            counts=0;
            }
    }               
    void Wagon::printCapybaras(){
        for (int i = 0; i < counts; i++){
            cout << w[i].getName() << " " << w[i].getAge() << endl;
        }
    } 