#include <iostream>
using namespace std;
void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
    cout << "Report Card ";
    for (int i = 0; i < 4; i++){
        cout << courses[i] << " ";
    }
    cout << endl;
    for (int c = 0; c < nstudents; c++){
        cout << students[c];
        for (int r = 0; r < 4; r++){
            cout  << report_card[c][r] << " ";
        }
        cout << endl;
    }
}