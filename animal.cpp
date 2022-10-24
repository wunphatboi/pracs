#include "animal.h"
void animal::set_name(string n){
name = n;
}
void animal::set_volume(int vol){
volume = vol;
}
int animal::get_volume(){
return volume;
}
int animal::get_animalID(){
return animalID;
}