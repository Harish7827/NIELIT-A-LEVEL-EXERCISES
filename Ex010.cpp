// WAP to create an array of size 10 and store your names;
// User input

#include<iostream>
using namespace std;
int main(){
    cout<<"------------------------------------\n";
    string name[10] = {};
    string name1;
    for (int i = 0; i < 10 ; i++){
        cout<<"Enter name of student: ";
        cin>> name1;
        name[i] = name1;
    }
    cout<<endl;
    for(int i = 0; i < 10 ; i++){
        cout<<i+1<<" . "<< name[i]<<endl;
    }
    cout<<"------------------------------------\n";
    return 0;
}
