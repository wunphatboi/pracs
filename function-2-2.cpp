#include <iostream>
#include <math.h>
using namespace std;
int binary_to_int(int binary_digits[], int number_of_digits){
    int dec = 0;
    for (int i = 0; i < number_of_digits; i++){
        dec = dec * 2 + binary_digits[i];
    }
    return dec;
}