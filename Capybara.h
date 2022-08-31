#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>
using namespace std;
class Capybara{
public:
Capybara();
string name;
int age;
void setName(string capyName);
string getName();
void setAge(int capyAge);
int getAge();
};
#endif