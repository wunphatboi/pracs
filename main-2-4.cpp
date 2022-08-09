#include <iostream>
using namespace std;
int main(){
    int array[5] = {1,10,3,4,-10};
    int *ptr;
    ptr = array;
    for (int i = 0; i < 5; i++){
        cout << *(ptr+i) << " ";
    }
}