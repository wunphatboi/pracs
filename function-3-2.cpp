#include <iostream>

using namespace std;

int *readNumbers(){
    int *array;
    array = new int[10];
    for (int i = 0; i < 10; i++){
        cin >> *(array + i);
    }
    return array;
}

bool equalsArray(int *arr1,int *arr2,int length){

 if(length==0)
    return false;
  for(int i=0;i<length;i++){
    if(arr1[i]!=arr2[i])
        return false;
  }
  return true;


}

int *reverseArray(int *arr1,int length){

   int *arr2=new int[length];
   for(int i=0,j=length-1;i<length;i++,j--){
    arr2[i]=arr1[j];

   }
  return arr2;

}



void printNumbers(int *numbers,int length)

{

for(int i=0; i<length; i++)

cout<<i<<" "<<numbers[i]<<endl;

}