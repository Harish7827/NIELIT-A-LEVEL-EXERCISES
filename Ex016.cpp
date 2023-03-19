// WAP to overload a sum() function

#include<iostream>
using namespace std;

int sum(int num1, int num2){
    return num1 + num2;
}

double sum(double num1, double num2){
    return num1 + num2;
}

int main(){
    cout<<sum(30,10)<<endl;
    cout<<sum(30.15,10.50)<<endl;
    return 0;
}
