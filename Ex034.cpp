// SIZE OF ARRAY AND POINTER;

#include<iostream>
using namespace std;

void fun(int dataArr[]){
    cout<<"Size of array is "<<sizeof(dataArr)<<endl;
}

int main(){
    int dataArr[] = {10,20,30,40,50};
    int *ptr1 = new int(10);
    cout<<"Size of ptr 1: "<<sizeof(ptr1)<<endl;
    cout<<"Size of *ptr 1: "<<sizeof(*ptr1)<<endl;
    char *ptr2 = new char('a');
    cout<<"Size of ptr 2: "<<sizeof(ptr2)<<endl;
    cout<<"Size of *ptr 2: "<<sizeof(*ptr2)<<endl;

    //fun(dataArr);
    return 0;
}
