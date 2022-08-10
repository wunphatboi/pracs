#include <iostream>
using namespace std;

int palindrome_sum(int integers[], int length){
    if (length >= 1){ 
        for (int i = 0; i < length/2; i++){ 
        if (integers[i] != integers[length-i-1] || integers[i+1] < integers[i]){ 
            return -2;
        }
    }  
    for (int i = length/2; i < length - 1; i++){
        if (integers[i+1] > integers[i]){
            return -2;
        }
    }
}
int sum = 0;
    for (int i = 0; i < length; i++){
        sum = sum + integers[i];
    }
    return sum;
}

bool is_array_palindrome(int integers[], int length){
    if (length >= 1){ 
        for (int i = 0; i < length/2; i++){ 
        if (integers[i] != integers[length-i-1] || integers[i+1] < integers[i]){ 
            return false;
        }
    }  
    for (int i = length/2; i < length - 1; i++){
        if (integers[i+1] > integers[i]){
            return false;
        }
    }
    return true;
    }else{
        return false;
    }
}

int sum_integers(int integers[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum = sum + integers[i];
    }
    return sum;
}
