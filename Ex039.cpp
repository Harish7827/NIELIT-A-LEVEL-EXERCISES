// Implement Stack using array;
// Create class

#include<iostream>
using namespace std;
const int sizeOfArr = 5;
class Stack{
    protected:
        int dataArr[sizeOfArr];
        int top;
    public:
        Stack(){
            top = -1;
        }

        void push(int item){
            if(top == sizeOfArr - 1){
                cout<<"\n\aStack is full,given item can't be added\a\n";
            }else{
                top++;
                dataArr[top] = item;
            }
        }

        void pop(){
            if(top == -1){
                cout<<"\n\aStack is empty\a\n\n";
            }else{
                cout<<dataArr[top]<<endl;
                top--;
            }
        }
        void display(){
            cout<<endl;
            for(int i = top; i >= 0; i--){
                cout<<dataArr[i]<<endl;
            }
            cout<<endl;
        }

};
int main(){
    Stack s1;
    int choice, data;
    while(true){
        cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        if(choice == 1){
            cout<<"Enter Data: ";
            cin>>data;
            s1.push(data);
        }else if(choice == 2){
            s1.pop();
        }else if(choice == 3){
            s1.display();
        }else if(choice == 4){
            cout<<"\nThank You\n";
            break;
        }else{
            cout<<"\n\aYou have entered invalid keyword\a\n\n";
        }
    }
    return 0;
}
