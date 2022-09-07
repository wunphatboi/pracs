#include <iostream>
#include "Cage.h"
using namespace std;
Cage::Cage(){
    id = 0;
    name = "";
};

Cage::Cage(std::string newName, int newNumber){
    id = newNumber;
    name = newName;
};   

std::string Cage::get_name(){
    return name;
};  

int Cage::get_IDnum(){
    return id;
};

Cage::~Cage(){ 
};