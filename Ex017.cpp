// Use operator overloading to add two circles also define construction class.

#include<iostream>
using namespace std;

class circle{
    public:
        float radius;
        circle(){
            radius = 0;
        }
        float Area(){
            return 3.14 * radius * radius;
        }
        float Circumference(){
            return 2 * 3.14 * radius;
        }

        circle operator + (const circle& c){
            circle temp;
            temp.radius = radius + c.radius;
            return temp;
        }
};

int main(){
    cout<<"-------------------------------------------------------------------------"<<endl;
    circle circle1,circle2,circle3;
    circle1.radius = 10.5;
    circle2.radius = 20.6;
    circle3 = circle1 + circle2;

    cout<<"\nThe radius of circle c is "<<circle3.radius<<endl;
    cout<<"\nThe area of circle c is "<<circle3.Area()<<endl;
    cout<<"\n-------------------------------------------------------------------------"<<endl;
    return 0;
}
