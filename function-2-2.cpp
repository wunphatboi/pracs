#include <iostream>
using namespace std;
int max_sub_sum(int *nums,int length){
    int max_sum = 0;
    int sum = 0;
    while(length--){
        sum += *nums;
        if(sum < 0)
        sum = 0;
        max_sum = max_sum > sum ? max_sum : sum;
        nums++;
    }
return max_sum;
}