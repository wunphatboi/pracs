#include <iostream>
using namespace std;

int palindrome_sum(int integers[], int length){
    int sum = 0;
    for (int i = 0; i <= length/2; i++){
        if (integers[i] != integers[length-i-1] || length < 1 ){
            return -2;
        }
    }
        for (int i = 0; i < length; i++){
                sum = sum + integers[i];
            }
    return sum;
}

bool is_array_palindrome(int integers[], int length){
    int sum = 0;
    for (int i = 0; i <= length/2; i++){
        if (integers[i] != integers[length-i-1] || length < 1 ){
            return false;
        }
    }
    return true;
}

int sum_integers(int integers[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
                sum = sum + integers[i];
            }
    return sum;
}