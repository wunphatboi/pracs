#include <iostream>
using namespace std;
void count_digits(int array[4][4]){
int count[10] = {0};
	for(int i = 0; i<4; i++){
		for(int j = 0; j<4; j++){
			if(array[i][j] == 0)
			{
				count[0]++;
			}
			else if(array[i][j] == 1)
			{
				count[1]++;
			}
			else if(array[i][j] == 2)
			{
				count[2]++;
			}
			else if(array[i][j] == 3)
			{
				count[3]++;
			}
			else if(array[i][j] == 4)
			{
				count[4]++;
			}
			else if(array[i][j] == 5)
			{
				count[5]++;
			}
			else if(array[i][j] == 6)
			{
				count[6]++;
			}
			else if(array[i][j] == 7)
			{
				count[7]++;
			}
			else if(array[i][j] == 8)
			{
				count[8]++;
			}
			else if(array[i][j] == 9)
			{
				count[9]++;
			}
		}
	}
	for(int i = 0; i<10; i++){
		cout<<i<<":"<<count[i]<<";";
	}
    cout << endl;
}