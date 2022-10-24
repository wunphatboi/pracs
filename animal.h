#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class animal{
public:
animal();
animal(std::string n, int v);

void set_name(std::string n);
void set_volume(int v);

virtual std::string get_name()=0;
int get_animalID();
int get_volume();

protected:
std::string name ;
int animalID ;
int volume ;

};
#endif 