#// Include the required header files.

#include "vegie.h"

// Define the static member variable.

int vegie::nextID = 100;

// Define the constructor.

vegie::vegie(string n ,int v):animal(n,v){

favourite_food = "grass";

nextID++;

animalID=nextID;

}

// Define the member functions.

string vegie::favourite_food(){

return favourite_food;

}

string vegie::get_name(){

return "Safe "+name;

}

void vegie::favourite_food(string f){

favourite_food = f;

}