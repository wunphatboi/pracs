#include <iostream>
using namespace std;
extern int bin_to_int(int binary_digits[], int number_of_digits);
int main(){
    int binary[4] = {1,1,0,1};
    int number_of_digits = 4;
    cout << bin_to_int(binary,number_of_digits) << endl;
    return 0;
}