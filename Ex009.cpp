// WAP to design a simple mathematical calculator using switch and break statement;

#include<iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------------"<<endl;
    char op;
    float number1, number2;
    cout<<"Please choose an operator (+,-,*,/): ";
    cin>>op;

    cout<<"Enter a first number: ";
    cin>>number1;
    cout<<"Enter a second number: ";
    cin>>number2;

    switch(op){
    case '+':
        cout<<"The sum of two number is "<<number1 + number2 <<endl;
        break;
    case '-':
        cout<<"The difference of two number is "<<number1 - number2 <<endl;
        break;
    case '*':
        cout<<"The product of two number is "<<number1 * number2 <<endl;
        break;
    case '/':
        cout<<"The division of two number is "<<number1 / number2 <<endl;
        break;
    default:
        cout<<"You have entered invalid key"<<endl;
    }

    cout<<"--------------------------------------------"<<endl;
    return 0;
}
