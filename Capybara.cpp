#include <iostream>
using namespace std;
class Capybara{
public:
string name;
int age;
void setName(string capyName){
name = capyName;
}
string getName(){
return name;
}
void setAge(int capyAge){
age = capyAge;
}
int getAge(){
return age;
}
};