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

void hexDigits(int *numbers,int length)
{
for(int i=0;i<length;i++) //iterating through every digit in the array
{
cout << i << " " << numbers[i] << " "; //printing the index and the digit
//checking and printing the corresponding hex digit
if(numbers[i]>=0 and numbers[i]<=9)
cout << numbers[i];
else
{
switch(numbers[i])
{
case 10:
cout << "A";
break;
case 11:
cout << "B";
break;
case 12:
cout << "C";
break;
case 13:
cout << "D";
break;
case 14:
cout << "E";
break;
case 15:
cout << "F";
break;
}
}
//going to a new line for next digit
cout << endl;
}
}