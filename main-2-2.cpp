#include <iostream>
using namespace std;
extern int max_sub_sum(int *nums,int length);
int main(){
    int arr1[10] = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
    int arr2[10] = {-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    max_sub_sum(arr2,10);
    return 0;
}