// WAP to identify whether the given number is odd or even

#include<iostream>
using namespace std;
int main(){
    cout<<"----------------------------------------\n";
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number%2==0){
        cout<<"Given number is even"<<endl;
    }else{
        cout<<"Given number is odd"<<endl;
    }
    cout<<"----------------------------------------\n";
    return 0;
}
