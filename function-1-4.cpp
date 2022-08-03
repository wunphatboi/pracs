#include <iostream>
using namespace std;
void print_scaled(int array[3][3],int scale){
    for (int r = 0; r < 3; r++){
        for (int c = 0; c < 3; c++){
            if (c == 2){
                cout << array[r][c]* scale;
            }else{
                cout << array[r][c]* scale << " ";
            }
        }
        cout << endl;
    }
}