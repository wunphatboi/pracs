#include <iostream>
using namespace std;
void print_ascending(int *vals, int len){
for(int i=0; i<len; i++){
    if (vals[i] > vals[i+1]){
        break;
    }else{
        cout << vals[i] << " ";
    }
}
}