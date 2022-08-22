#include <iostream>
using namespace std;
extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);
extern void printNumbers(int *numbers,int length);

int main(){
  int *arr1=readNumbers();

  int *arr2=reverseArray(arr1,10);

  cout<< (equalsArray(arr1,arr2,10)) << endl;
  return 0;
}
