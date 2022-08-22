#include <iostream>
using namespace std;

int *readNumbers(){
    int *array;
    array = new int[4];
    for (int i = 0; i < 4; i++){
        cin >> array[i];
    }
    return array;
}

void printNumbers(int *numbers,int length){
    for (int i = 0; i < length; i++){
        cout << i << " " << numbers[i] << endl;
    }

}

int secondSmallestSum(int *numbers, int length)
{
int small, secondsmall;
small = secondsmall = 0;
//add all numbers to secondsmall and one number less to small
for(int i=0; i<length-1; i++)
{
small += numbers[i];
secondsmall += numbers[i];
}
secondsmall += numbers[length-1];
//update small and secondsmall
for(int i=0; i<length; i++)
{
int sum = 0;
for(int j=i; j<length; j++)
{
sum += numbers[j];
if(sum<small)
{
secondsmall = small;
small = sum;
}
else if(sum<secondsmall)
secondsmall = sum;
}
}
return secondsmall;
}
