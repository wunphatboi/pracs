#include <iostream>
using namespace std;

int* matrix_min_max(int **vals,int num_rows, int num_cols){
    int min = INT_MAX;
	int max = -INT_MAX;
	for(int r = 0; r < num_rows; r++) {
		for(int c = 0; c < num_rows; c++) {
			if(vals[r][c] > max) {
				max = vals[r][c];
			}
			if(vals[r][c] < min) {
				min = vals[r][c];
			}
		}
	}
	int* temp = new int[2];
	temp[0] = min;
	temp[1] = max;
	return temp;
}