#include <iostream>
#include "Cage.h"
using namespace std;
Cage::Cage(){
    int newNumber = 0;
    std::string newName = "";
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
    int newNumber = 0;
    std::string newName = "";
};