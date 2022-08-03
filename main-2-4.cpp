#include <iostream>
using namespace std;
extern int sum_min_max(int [], int);
extern int array_min(int [], int);
extern int array_max(int [], int);
int main(){
    int array[3] = {5,10,2};
    int size = 3;
    cout << sum_min_max(array,size) << endl;
    cout << array_min(array,size) << endl;
    cout << array_max(array,size) << endl;
    return 0;
}