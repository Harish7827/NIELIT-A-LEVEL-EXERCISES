// sizeof() operator : Apply to various operand type like int, float, double, char;

#include<iostream>
using namespace std;
int main(){
    int dataArr[] = {10,20,30,40,50};
    cout<<"Size of integer data type: "<<sizeof(int)<<endl; // 4 Bytes
    cout<<"Size of float data type: "<<sizeof(float)<<endl; // 4 Bytes
    cout<<"Size of double data type: "<<sizeof(double)<<endl; // 8 Bytes
    cout<<"Size of char data type: "<<sizeof(char)<<endl; // 1 Bytes
    cout<<"Size of array data type: "<<sizeof(dataArr)<<endl;
    return 0;
}
