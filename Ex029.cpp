// Create 2D array of size (3 X 5). Store value 1 to 15 in the array.
// (A) Define / Declare array
// (B) Initialization with appropriate value;
// (C) Navigate / Traverse the array and print its value;
// 2D Arrays also known as matrix;

#include<iostream>
using namespace std;
/*
void printArray(int dataArr[row][column]){
    int row , column;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout<<dataArr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
*/
int main(){
    int dataArr[3][5];
    int x = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            dataArr[i][j] = x;
            x++;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout<<dataArr[i][j]<<" ";
        }
        cout<<"\n";
    }
    // printArray(dataArr[3][5]);
    return 0;
}
