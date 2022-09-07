#include <iostream>
#include "Clinic.h"
using namespace std;
Clinic::Clinic(){
    max_size1 = 0; 
    curr_size = 0;
    vet = new Cage[max_size1];
    std::string cname = "";
};

Clinic::Clinic(std::string name, int max_size){
    max_size1=max_size;
    curr_size = 0;
    vet = new Cage[max_size1];
    cname = name;
};

int Clinic::get_number_of_cages(){
    return curr_size;
};

std::string Clinic::get_name(){
    return cname;
};

Cage * Clinic::get_cages(){
    return vet;
};

bool Clinic::add_cage(Cage new_cage){
    if (curr_size < max_size1){
        vet[curr_size] = new_cage;
        curr_size++;
        return true;
    }
    return false;
}; 

Clinic::~Clinic(){
    delete[] vet;
};