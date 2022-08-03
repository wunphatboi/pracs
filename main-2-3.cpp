#include <iostream>
using namespace std;
extern int sum_if_palindrome(int [],int);
int main(){
    int array[3] = {5,10,5};
    int size = 3;
    cout << sum_if_palindrome(array,size) << endl;
    return 0;
}