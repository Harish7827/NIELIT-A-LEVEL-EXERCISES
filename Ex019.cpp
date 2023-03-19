// Example of Data Abstraction through class;

#include<iostream>
using namespace std;
class Sum{
    private:
        int x, y, z; // Private Variable
    public:
        void add(){
            cout<<"Enter the first number: ";
            cin>>x;
            cout<<"Enter the second number: ";
            cin>>y;
            z = x + y;
            cout<<"The sum of two numbers are = "<< z<<endl;
        }
};

int main(){
    Sum sum1;
    sum1.add();
    return 0;
}
