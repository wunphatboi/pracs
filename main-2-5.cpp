#include <iostream>
using namespace std;
int main(){
    int array[][3]= {{1,2,3},{4,5,6}};
    int (*p)[3] = array;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << (*p+i) << endl;
        }

    }
}