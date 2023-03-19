// WAP to find the area of ten circles using function;
// Range given by user

#include<iostream>
using namespace std;

float areaOfCircle(float radius){
    return 3.14 * radius * radius;
}

int main(){
    int start_value, end_value;
    cout<<"Enter start value: ";
    cin>>start_value;
    cout<<"Enter end value: ";
    cin>>end_value;

    for (int i = start_value; i <= end_value; i++){
        cout<<"\t\nThe area of circle with radius"<< i <<" is "<< areaOfCircle(i)<<endl;
    }
    return 0;
}
