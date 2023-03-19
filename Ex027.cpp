// Implement Linear Search for searching a string in array of string;

#include<iostream>
using namespace std;

int main(){
    string dataArray[] = {"Harish","Dilip","Akansha","Nagma"};
    int sizeOfArray = sizeof(dataArray) / sizeof(dataArray[0]);

    string searchKey;
    cout<<"Enter a name: ";
    cin>>searchKey;

    int found = -1;
    for(int i = 0; i < sizeOfArray; i++){
        if(dataArray[i] == searchKey){
            found = i;
            break;
        }
    }
    if (found == -1){
        cout<<"Element not found in this array\n";
    }else{
        cout<<"Element found at "<<found<<"th index of array\n";
    }

    return 0;
}
