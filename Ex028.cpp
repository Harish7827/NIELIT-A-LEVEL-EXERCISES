// Binary Search (Must be sorted array)
// Iteration Method

#include<iostream>
using namespace std;

void inputArray(int dataArr[],int sizeOfArray){
    for(int i = 0; i < sizeOfArray; i++){
        cout<<"Enter a value in array: ";
        cin>>dataArr[i];
    }
}


void binarySearch(int dataArr[], int sizeOfArray,int searchValue){
    int mid = 0,low = 0,high = sizeOfArray , found = -1,pass,element,temp;

    // If Array is not sorted;
    for(pass = 0; pass < sizeOfArray ; pass++){
        for(element = pass+1; element < sizeOfArray; element++){
            if(dataArr[pass] > dataArr[element]){
                temp = dataArr[element];
                dataArr[element] = dataArr[pass];
                dataArr[pass] = temp;
            }
        }
    }

    // print Array
    cout<<"Array: ";
    for(int j = 0; j < sizeOfArray; j++){
            cout<<dataArr[j]<<",";
    }
    cout<<endl<<endl;


    // Searching
    while(low <= high){
        mid = (high + low)/2;
        if(dataArr[mid] == searchValue){
            found = mid;
            break;
        }else if(dataArr[mid] > searchValue){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    if(found == -1){
        cout<<"Element not found in this array\n";
    }else{
        cout<<"Element found at "<<found <<"th index of array\n";
    }
}
int main(){
    int dataArr[10];
    int sizeOfArray = sizeof(dataArr) / sizeof(dataArr[0]);
    inputArray(dataArr,sizeOfArray);

    int searchValue;
    cout<<"\n\nEnter a search value: ";
    cin>>searchValue;

    binarySearch(dataArr,sizeOfArray,searchValue);
    return 0;
}
