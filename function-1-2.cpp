#include <iostream>
using namespace std;
int is_identity(int array[10][10]){
    int sum = 0;
    for (int r = 0; r < 10; r++){
        for(int c = 0; c < 10; c++){
            if (array[r][c] != 1 && array[c][r] != 0){
                return 0;
            }
        }
    }
    return 1;
}