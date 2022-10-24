#// Include the required header files.

#include "vegie.h"

// Define the static member variable.

int vegie::nextID = 100;

// Define the constructor.

vegie::vegie(string n ,int v):animal(n,v){

favouritefood = "grass";

nextID++;

animalID=nextID;

}

// Define the member functions.

string vegie::getFavourite(){

return favouritefood;

}

string vegie::get_name(){

return "Safe "+name;

}

void vegie::setFavourite(string f){

favouritefood = f;

}