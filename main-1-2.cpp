#include <iostream>
using namespace std;
extern void print_class(std::string [4], std::string [], int [][4], int);
int main(){
    std::string courses[4] = {"math","chemistry","physics","history"};
    std::string students[4] = {"harry","sophie","gary","ollie"};
    int report_card[4][4] = {{88,88,88,88},{88,88,88,88},{88,88,88,88},{88,88,88,90}};
    print_class(courses,students,report_card,4);
   
    
    return 0;
}