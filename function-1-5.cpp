#include <iostream>
using namespace std;
int size_of_array_arr(){
    int *arr = new int[3];
    return (3*sizeof(int));
}