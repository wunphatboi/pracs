#ifndef CAGE_H
#define CAGE_H
#include <string>
#include <iostream>
class Cage{
    private:
    int id;
    std::string name;
    public:
    Cage();                                         // a default constructor ID number is zero and occupant name is an empty string ""
    Cage(std::string newName, int newNumber);       // a constructor that takes the ID number and occupant name
    std::string get_name();                         // returns the name of the cage occupant
    int get_IDnum();                                // returns the cage's ID number
    ~Cage();   
};
#endif