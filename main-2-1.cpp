#include <iostream>
using namespace std;
extern void multiples_of_seven(int *nums,int length);
int main(){
    int array[5] = {7,2,14,4,5};
    int *p;
    p = array;
    multiples_of_seven(p,5);
    return 0;
}