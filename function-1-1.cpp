#include <iostream>
using namespace std;
void print_matrix(int array[10][10]){
    for (int r = 0; r < 10; r++){
        for (int c = 0; c < 10; c++){
            if (c==9){
                cout << array[r][c];
            }else{
                cout << array[r][c] << " ";
            }
        }
        cout << endl;
    }
}