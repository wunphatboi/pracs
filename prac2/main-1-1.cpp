#include <iostream>
using namespace std;
#include "function-1-1.cpp"
int main(){
    int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout << sum_diagonal(array) << endl;
    return 0;
}