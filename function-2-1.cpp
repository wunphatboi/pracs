#include <iostream>
#include <math.h>
using namespace std;
void print_binary_str(std::string decimal_number){
    int n = stoi(decimal_number);
    int remainder = 0;
    int quotient = n;
    int num = 0;
    int i = 0;
    while(quotient!=0){
        remainder = quotient%2;
        quotient = quotient/2;
        num = (remainder*pow(10,i)) + num;
        i++;
    }
    cout << num << endl;
}