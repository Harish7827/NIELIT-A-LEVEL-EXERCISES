// Use selection sort algorithm to sort array in descending order;

#include<iostream>
using namespace std;
void printArray(int dataArr[], int sizeOfArr=10){
    for(int j = 0; j < sizeOfArr; j++){
            cout<<dataArr[j]<<" ";
    }
}

int main(){

    int i,j,temp, sizeOfArr = 10;
    // Define an array
    int dataArr[10] = {90,80,75,85,66,56,25,10,350,59};

    cout<<"\n-----------------------------------------------\n";
    cout<<"Input List...\n";
    printArray(dataArr,sizeOfArr);
    cout<<"\n-----------------------------------------------\n";

    cout<<"\n\nSorted List[Ascending Order]...\n";
    for(i = 0; i < sizeOfArr ; i++){
        for(j = i+1; j < sizeOfArr; j++){
            if(dataArr[i] > dataArr[j]){
                temp = dataArr[j];
                dataArr[j] = dataArr[i];
                dataArr[i] = temp;
            }
        }
        cout<<"Pass = "<<i<<" Array = ";
        for(j = 0; j < sizeOfArr; j++){
                cout<<dataArr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\nFinal Ascending Order Array...\n";
    printArray(dataArr,sizeOfArr);
    cout<<endl;
    cout<<"\n-----------------------------------------------\n";

    cout<<"\n\nSorted List[Descending Order]...\n";
    for(i = 0; i < sizeOfArr ; i++){
        for(j = i+1; j < sizeOfArr; j++){
            if(dataArr[i] < dataArr[j]){
                temp = dataArr[j];
                dataArr[j] = dataArr[i];
                dataArr[i] = temp;
            }
        }
        cout<<"Pass = "<<i<<" Array = ";
        for(j = 0; j < sizeOfArr; j++){
                cout<<dataArr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\nFinal Descending Order Array...\n";
    printArray(dataArr,sizeOfArr);
    cout<<endl;
    cout<<"\n-----------------------------------------------\n";
    return 0;
}
