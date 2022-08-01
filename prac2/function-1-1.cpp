#include <iostream>
using namespace std;
int sum_diagonal(int array[4][4]){
    int sum = 0;
    for (int r = 0; r < 4; r++){
        for(int c = 0; c < 4; c++){
            if (r == c){
                sum = sum + array[r][c];
            }
        }
    }
    return sum;
}