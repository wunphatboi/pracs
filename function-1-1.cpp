#include <iostream>
#include <string.h>
using namespace std;
void string_2d_copy(std::string first[][2], std::string second[][2], int n){
    for (int r = 0; r < n; r++){
        for (int c = 0; c < 2; c++){
            second[r][c] = first[r][c];
        }
    }
}