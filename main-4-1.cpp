#include <iostream>
using namespace std;
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern int secondSmallestSum(int *numbers, int length);
int main(){
    int* arr = readNumbers();
    cout << secondSmallestSum(arr,4) << endl;
    return 0;
}