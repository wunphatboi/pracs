#include <iostream>
#include "Wagon.h"
using namespace std;
int main(){
    Capybara c1,c2,c3,c4,c5;
    c1.setName("james");
    c1.setAge(21);
    c2.setName("ollie");
    c2.setAge(18);
    c3.setName("brianna");
    c3.setAge(30);
    c4.setName("ethan");
    c4.setAge(15);
    c5.setName("alex");
    c5.setAge(20);
    Wagon w;
    w.addCapybara(c1);
    w.addCapybara(c2);
    w.addCapybara(c3);
    w.addCapybara(c4);
    w.addCapybara(c5);
    w.printCapybaras();
    w.emptyWagon();
    w.printCapybaras();
    return 0;
}