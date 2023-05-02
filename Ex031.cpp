// Create a pointer data type pointing to int value and print the addresses and values;

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *b;
    int **c;
    b = &a;
    c = &b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*(&a)<<endl;
    cout<<*b<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    cout<<c<<endl;
    return 0;
}
