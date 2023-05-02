// Azadi ka Amrit Mahotsav

#include<iostream>
using namespace std;
int main(){
    int row, column, usedBullets = 0;
    int bullets = 10;
    int killed = 0;
    int firangi[3][5] = {
        {0,0,1,0,0},
        {0,1,0,1,0},
        {1,0,0,0,1}
    };

    while(usedBullets <= bullets){
        cout<<"Enter row number 0 to 2: ";
        cin>> row;
        cout<<"Enter column number 0 to 4: ";
        cin>>column;

        if(row > 2 || row < 0 || column > 4 || column < 0 ){
            cout<<"Andhi Goli Mat,Chala Goli Kam Hai\n";
        }

        usedBullets++;

        if(firangi[row][column] == 1){
            cout<<"Wow! you hit the target\n";
            killed++;
        }else{
            cout<<"Tumse na ho payega \n";
        }
    }
        cout<<"You Killed "<<killed<<" number of British Soldiers \n";
    return 0;
}
