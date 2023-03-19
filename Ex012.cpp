// Expected output
// Radius       Area        circumference
// 10           314         62.8

#include<iostream>
using namespace std;

float areaOfCircle(float radius){
    return 3.14159 * radius * radius;
}

float circumferenceOfCircle(float radius){
    return 2 * 3.14159 * radius;
}

int main(){
    cout<<"--------------------------------------------------------------"<<endl;
    int start_value, end_value;
    cout<<"Enter start value: ";
    cin>>start_value;
    cout<<"Enter end value: ";
    cin>>end_value;

    cout<<endl<<"Radius"<<"\tArea\t"<<"\tCircumference"<<endl;

    for (int i = start_value; i <= end_value; i++){
        cout<<i<<"\t"<<areaOfCircle(i)<<"\t"<<"\t"<<circumferenceOfCircle(i)<<endl;
    }
    cout<<"\n--------------------------------------------------------------"<<endl;
    return 0;
}
