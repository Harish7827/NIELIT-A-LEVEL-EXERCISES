// WAP to print multiplication of a given number using while loop;

#include<iostream>
using namespace std;
int main(){
    cout<<"---------------------------------------\n";
    int number, i = 1;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"\nThe table of "<< number <<" is given below \n"<<endl;
    while(i <= 10){
        cout<<"\t"<<number<< " * " <<i<<" = " <<i*number<<endl;
        i++;
    }
    cout<<"---------------------------------------\n";
}
