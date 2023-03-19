// Find the area of circle;
// Formula =  pie * (radius * radius);

#include<iostream>
using namespace std;
int main(){
    cout<<"-------------------------------------------------------\n";
    float radius, area;
    const float pie= 3.14;

    cout<<"Enter a radius: ";
    cin>>radius;

    area = pie * (radius * radius);
    cout<<"The area of circle is : "<<area <<endl;
    cout<<"\n-------------------------------------------------------\n";
    return 0;
}

