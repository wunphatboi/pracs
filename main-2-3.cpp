#include <iostream>
using namespace std;
extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);
int main(){
    int array[4] = {1,2,2,1};
    int length = 4;
    cout << palindrome_sum(array,length) << endl;
    cout << is_array_palindrome(array,length) << endl;
    cout << sum_integers(array,length) << endl;

}