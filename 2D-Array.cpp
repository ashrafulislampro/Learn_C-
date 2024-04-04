#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int row, col;
    int A[2][3];

    cout<< "Enter 2D Array element"<<endl;
    for(row= 0; row < 2; row++){
        for(col= 0; col < 3; col++){
            cin>> A[row][col];
        }
    }

   for(row= 0; row < 2; row++){
        for(col= 0; col < 3; col++){
            cout<< "Array Element Row = " << row << " Col = " << col << " is = "<< A[row][col]<<endl;
        }
    }
    getchar();
}
