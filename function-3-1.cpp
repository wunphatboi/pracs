#include <iostream>
using namespace std;
int next_match_count(int vals[], int length){
    int count = 0;
    for (int i = 0; i < length; i++){
        if (vals[i] == vals[i+1]){
            count = count + 1;
        }
    }
    return count;
}