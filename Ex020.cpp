// Create a class name myMath;
// Create a member function (method) add and multiplication;
// Create a derived class myCharMath;

#include<iostream>
using namespace std;
class myMath{
    public:
        float num1, num2;
        float addition(){
            return num1 + num2;
        }
        float multiplication(){
            return num1 * num2;
        }
};

class myCharMath : public myMath{

};

int main(){
    myMath number;
    cout<<"Enter the first number: ";
    cin>>number.num1;
    cout<<"Enter the second number: ";
    cin>>number.num2;

    cout<<"The sum of two number = "<< number.addition()<<endl;
    cout<<"The product of two number = "<< number.multiplication()<<endl;
}

