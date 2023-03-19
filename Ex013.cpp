// Create a class name circle with attribute radius, BC(Border Color), FC(Filled Color) and method DC(Draw Circle), CA(Calculate Area), CC(Calculate Circumference).
// Area and circumference

#include<iostream>
using namespace std;

class circle{
    public:
    float radius;
    float calculateArea(){
        return 3.14 * radius * radius;
    }
    float calculateCircumference(){
        return 2 * 3.14 * radius;
    }
};

int main(){
    cout<<"-------------------------------------------------------------------------"<<endl;
    circle circle1;
    circle circle2;
    cout<<"Enter a radius of circle 1: ";
    cin>>circle1.radius;
    cout<<"Enter a radius of circle 2: ";
    cin>>circle2.radius;

    // Area and circumference of circle 1
    cout<<"\nThe area of circle1 is "<< circle1.calculateArea()<<endl;
    cout<<"The circumference of circle2 is "<< circle1.calculateCircumference()<<endl;
    // Area and circumference of circle 2
    cout<<"\nThe area of circle2 is "<< circle2.calculateArea()<<endl;
    cout<<"The circumference of circle2 is "<< circle2.calculateCircumference()<<endl;
    cout<<"\n-------------------------------------------------------------------------"<<endl;
    return 0;
}
