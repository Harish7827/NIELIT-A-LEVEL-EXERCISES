// write a program to print even numbers in range between 1 to 100.

#include<iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------\n";
    int i;
    cout<<"Even numbers between 1 to 100: "<<endl;
    for(i = 1; i <= 100; i++ ){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    cout<<"--------------------------------------\n";
}
