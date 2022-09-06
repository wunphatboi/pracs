#include <iostream>
#include "Musician.h"
using namespace std;
Musician::Musician(){
    std::string instrument = "NULL";
    int experience = 0;
};
Musician::Musician(std::string instrument, int experience){
    Instrument = instrument;
    Experience = experience;
};
std::string Musician::get_instrument(){
    return Instrument;
};
int Musician::get_experience(){
    return Experience;
};
