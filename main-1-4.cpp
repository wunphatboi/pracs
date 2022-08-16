#include <iostream>
using namespace std;
extern void copy_doubles(double *old_array,double *new_array,int length);
int main(){
    double arr1[3] = {12.2,13.4,0.9};
    double arr2[3];
    copy_doubles(arr1,arr2,3);
    return 0;
}