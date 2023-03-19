//WAP to print grades as per the given logic
/*  100 - 90 A++
    90 - 80 A
    80 - 70 B
    70 - 60 C
    60 - 0  D
*/

#include<iostream>
using namespace std;
int main(){
    cout<<"---------------------------------\n";
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks >= 90 && marks <= 100){
        cout<<"A++"<<endl;
    }else if(marks >= 80 && marks < 90){
        cout<<"A"<<endl;
    }else if(marks >= 70 && marks < 80){
        cout<<"B"<<endl;
    }else if(marks >= 60 && marks < 70){
        cout<<"C"<<endl;
    }else if(marks >= 0 && marks < 60){
        cout<<"D"<<endl;
    }else{
        cout<<"\aInvalid Input! \a"<<endl;
    }
    cout<<"---------------------------------\n";
    return 0;
}
