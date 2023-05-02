// Implement Queue Using Array;

#include<iostream>
using namespace std;
const int sizeOfArr = 5;
class Queue{
    protected:
        int dataArr[sizeOfArr];
        int Front,Rear;
    public:
        Queue(){
            Front = -1;
            Rear = -1;
        }

        void insertion(int data){
            if(Rear == sizeOfArr - 1){
                cout<<"\n\aQueue is already full\a\n";
            }else if(Rear == -1){
                Front++;
                Rear++;
                dataArr[Rear] = data;
                cout<<"\nYou have entered "<<data<<"\n";
                cout<<"Data Inserted in Front Successful\n";
            }else{
                Rear++;
                dataArr[Rear] = data;
                cout<<"\nYou have entered "<<data<<"\n";
                cout<<"Data Inserted Successful\n";
            }
        }

        void deletion(){
            if(Front == -1){
                cout<<"\n\aQueue is Empty\n\a";
            }else{
                Front++;
                cout<<"Data Deleted Successful\n\n";
            }
        }

        void display(){
            if(Front == -1 && Rear == -1){
                cout<<"\nEmpty Set\n";
            }else{
                cout<<"\nQueue are given below: \n";
                for(int i = Front; i <= Rear; i++){
                    cout<<dataArr[i]<<" ";
                }
                cout<<endl<<endl;
            }
        }
};

int main(){
    Queue q1;
    int choice,data;
    while(true){
        cout<<"\n--------------------------------------------------------------\n";
        cout<<"1. Insertion\t2. Deletion\t3. Display\t4. Exit\n";
        cout<<"--------------------------------------------------------------\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        if(choice == 1){
            cout<<"Enter Data: ";
            cin>>data;
            q1.insertion(data);
        }else if(choice == 2){
            q1.deletion();
        }else if(choice == 3){
            q1.display();
        }else if(choice == 4){
            cout<<"\nThank You\n";
            break;
        }else{
            cout<<"\n\aYou have entered invalid keyword\a\n\n";
        }
    }
    return 0;
}
