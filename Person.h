#include <iostream>
#include
using namespace std;
class Person{
    private:
    string name;
    int salary;
    public:
    Person(){
        name = " ";
        salary = 0;
    }
    Person(int mySalary, string myName){
        name = myName;
        salary = mySalary;
    }
    void setName(string myName){
        name = myName;
    }
    string getName(){
        return name;
    }
    void setSalary(int mySalary){
        salary = mySalary;
    }
    int getSalary(){
        return salary;
    }
};