#include <iostream>
using namespace std;
extern int next_match_count(int vals[], int length);
int main(){
    int vals1[]={1,2,2,2,3,1,1,5,2,2};
    int vals1_length=10;
    int res1=next_match_count(vals1,vals1_length);
    int vals2[]={1,2,3,4,7,7,8};
    int vals2_length=7;
    int res2=next_match_count(vals2,vals2_length);
    return 0;
}