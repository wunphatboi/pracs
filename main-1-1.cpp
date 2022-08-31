#include <iostream>
#include "Capybara.cpp"
using namespace std;
int main(){
Capybara o1,o2,o3,o4;
// test 1
cout << "before setting o1 " << o1.getName() <<" " << o1.getAge() << endl;
o1.setName("test-1");
o1.setAge(57);
cout << "after setting o1 " << o1.getName() << " " << o1.getAge() << endl;
//test 2
cout << "before setting o2 " << o2.getName() <<" " << o2.getAge() << endl;
o2.setName("test-2");
o2.setAge(10);
cout << "after setting o2 " << o2.getName() << " " << o2.getAge() << endl;
//test 3
cout << "before setting o3 " << o3.getName() <<" " << o3.getAge() << endl;
o3.setName("test-3");
o3.setAge(8);
cout << "after setting o3 " << o3.getName() << " " << o3.getAge() << endl;
//test 4
cout << "before setting o4 " << o4.getName() <<" " << o4.getAge() << endl;
o4.setName("test-4");
o4.setAge(90);
cout << "after setting o4 " << o4.getName() << " " << o4.getAge() << endl;
return 0;
}