#include <iostream>
using namespace std;
extern void print_scaled(int array[3][3],int);
int main (){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int scale = 3;
    print_scaled(matrix,3);
    return 0;
}