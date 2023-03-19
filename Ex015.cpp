// WAP to define two class circle and rectangle with required members;

#include<iostream>
using namespace std;

class circle{
    public:
    float radius;
    void inputData(){
        cout<<"Enter a radius of circle: ";
        cin>>radius;
    }
    float calculateArea(){
        return 3.14 * radius * radius;
    }
    float calculateCircumference(){
        return 2 * 3.14 * radius;
    }
};

class rectangle{
    public:
    float length, breadth;
    void inputData(){
        cout<<"Enter the length of rectangle : ";
        cin>>length;
        cout<<"Enter the breadth of rectangle : ";
        cin>>breadth;
    }
    float calculateArea(){
        return length * breadth;
    }
    float calculateCircumference(){
        return 2 * (length + breadth);
    }
};

int main(){
    cout<<"-------------------------------------------------------------------------"<<endl;
    // Declaration of rectangle and circle
    rectangle rectangle1;
    rectangle rectangle2;
    circle circle1;
    circle circle2;

    // Input Data in rectangle 1 & 2;
    rectangle1.inputData();
    rectangle2.inputData();

    // Input Data in circle 1 & 2;
    circle1.inputData();
    circle2.inputData();
   

    // Area and perimeter of rectangle 1
    cout<<"\nThe area of rectangle 1 is "<< rectangle1.calculateArea()<<endl;
    cout<<"The perimeter of rectangle 1 is "<< rectangle1.calculateCircumference()<<endl;

    // Area and perimeter of rectangle 2
    cout<<"\nThe area of rectangle 2 is "<< rectangle2.calculateArea()<<endl;
    cout<<"The perimeter of rectangle 2 is "<< rectangle2.calculateCircumference()<<endl;

    // Area and circumference of circle 1
    cout<<"\nThe area of circle 1 is "<< circle1.calculateArea()<<endl;
    cout<<"The circumference of circle 2 is "<< circle1.calculateCircumference()<<endl;
    // Area and circumference of circle 2
    cout<<"\nThe area of circle 2 is "<< circle2.calculateArea()<<endl;
    cout<<"The circumference of circle 2 is "<< circle2.calculateCircumference()<<endl;
    cout<<"\n-------------------------------------------------------------------------"<<endl;
    return 0;
}