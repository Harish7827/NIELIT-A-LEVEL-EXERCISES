// Linear Search

#include<iostream>
using namespace std;

void linearSearch(int dataArray[],int sizeOfArray,int searchKey){
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
}

int main(){
    int dataArray[] = {1,2,3,4,5,6,8,7};
    int sizeOfArray = sizeof(dataArray) / sizeof(dataArray[0]);

    int searchKey;
    cout<<"Enter a number: ";
    cin>>searchKey;

    linearSearch(dataArray,sizeOfArray,searchKey);
    return 0;
}
