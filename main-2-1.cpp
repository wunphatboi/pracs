#include <iostream>
using namespace std;
extern int *readNumbers();
extern void hexDigits(int *numbers,int length);
int main(){
    int* arr = readNumbers();
    hexDigits(arr,10);
    return 0;
}