#include <iostream>
using namespace std;
extern void copy_integers(int old_array[],int new_array[],int length);
int main(){
    int array[5] = {1,2,10,4,5};
    int array2[5];
    copy_integers(array,array2,5);
    return 0;
}