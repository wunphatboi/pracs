#include <iostream>
#include "Person.h"
using namespace std;
int main(){
Person o1(100,"john"),o2(1000,"gary"),o3(1,"deb"),o4(60,"connor");
// test 1
cout << "before setting o1 " << o1.getName() <<" " << o1.getSalary() << endl;
o1.setName("lebron");
o1.setSalary(200);
cout << "after setting o1 " << o1.getName() << " " << o1.getSalary() << endl;
//test 2
cout << "before setting o2 " << o2.getName() <<" " << o2.getSalary() << endl;
o2.setName("gary");
o2.setSalary(20);
cout << "after setting o2 " << o2.getName() << " " << o2.getSalary() << endl;
//test 3
cout << "before setting o3 " << o3.getName() <<" " << o3.getSalary() << endl;
o3.setName("debby");
o3.setSalary(100000);
cout << "after setting o3 " << o3.getName() << " " << o3.getSalary() << endl;
//test 4
cout << "before setting o4 " << o4.getName() <<" " << o4.getSalary() << endl;
o4.setName("oliver");
o4.setSalary(90);
cout << "after setting o4 " << o4.getName() << " " << o4.getSalary() << endl;
return 0;
}