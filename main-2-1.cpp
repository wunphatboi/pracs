#include <iostream>
using namespace std;
extern void print_binary_str(std::string decimal_number);
int main (){
    string number = "5";
    print_binary_str(number);
    return 0;
}

// compiles with g++ main-2-1.cpp function-2-1.cpp -o a -std=c++11