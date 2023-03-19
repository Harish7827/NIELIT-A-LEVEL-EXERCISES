// Use selection sort algorithm to sort array in ascending order;

#include<iostream>
using namespace std;
int main(){
    int i,j,temp;
    // Define an array
    int dataArr[10] = {90,80,75,85,66,56,25,10,350,59};
    cout<<"Input List...\n";
    for (i = 0; i < 10; i++ ){
        cout<<dataArr[i]<<" ";
    }

    cout<<"\n\nReverse List...\n";
    for (i = 9; i >= 0 ; i-- ){
        cout<<dataArr[i]<<" ";
    }

    cout<<"\n\nPrinting 1 to 5 Ladder Design...\n";
    for (i = 0; i <= 5 ; i++){
            for(j = 1; j<=i; j++){
                cout<<i;
            }
            cout<<endl;
    }

     cout<<"\n\nPrinting Reverse 1 to 5 Ladder Design...\n\n";
    for (i = 5; i >= 0 ; i--){
            for(j = 1; j<=i; j++){
                cout<<i;
            }
            cout<<endl;
    }

    cout<<"\n\nSorted List...\n";
    for(i = 0; i < 10 ; i++){
        for(j = i+1; j<10;j++){
            if(dataArr[i] > dataArr[j]){
                temp = dataArr[j];
                dataArr[j] = dataArr[i];
                dataArr[i] = temp;
            }
        }
        cout<<dataArr[i]<<" ";
    }

    return 0;
}
