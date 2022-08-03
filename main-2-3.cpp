#include <iostream>
using namespace std;
extern int sum_if_palindrome(int [],int);
extern bool is_palindrome(int [], int);
extern int sum_array_elements(int [], int);
int main(){
    int array[3] = {5,10,2};
    int size = 3;
    cout << sum_if_palindrome(array,size) << endl;
    cout << is_palindrome(array,size) << endl;
    cout << sum_array_elements(array,size) << endl;
    return 0;
}