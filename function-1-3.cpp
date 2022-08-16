#include <iostream>
using namespace std;
void copy_integers(int old_array[],int new_array[],int length){
    int *p;
    p = old_array;
    int *p2;
    p2 = new_array;
    for (int i = 0;i < length; i++){
        *(p2+i) = *(p+i);
    }
}