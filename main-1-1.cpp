#include <iostream>
using namespace std;
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
int main(){
    int* arr = readNumbers();
    printNumbers(arr,10);
    return 0;
}