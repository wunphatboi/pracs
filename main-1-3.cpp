#include <iostream>
using namespace std;
extern void count_digits(int array[4][4]);
int main (){
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    count_digits(matrix);
    return 0;
}