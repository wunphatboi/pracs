#include <iostream>
using namespace std;
extern int binary_to_int(int [], int);
int main(){
    int binary[8] = {0,0,0,1,0,0,1,0};
    int length = 8;
    cout << binary_to_int(binary,length) << endl;
    return 0;
}