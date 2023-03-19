// WAP Generate Fibonacci Series;

#include<iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------\n";
    int num1,num2,sum;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The fibonacci series is given below: \n";

    for(int i = 1; i <= 20; i++){
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        cout<< sum <<" ";
    }
    cout<<"\n--------------------------------------\n";
}
