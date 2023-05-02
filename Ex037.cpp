// Implement circular link list;

#include<iostream>
using namespace std;
int main(){
    struct Node{
        int data;
        struct Node *prev,*next;
    };
    struct Node n0,n1,n2,n3,n4,n5;
    // Data insert in n2, n4, n5;
    n2.data = 2;
    n4.data = 4;
    n5.data = 5;

    cout<<"-------------------------------------\n";
    // Link
    n0.next =  &n1;
    n0.prev = &n5;

    n1.next = &n2;
    n1.prev = &n0;

    n2.next = &n3;
    n2.prev = &n1;

    n3.next = &n4;
    n3.prev = &n2;

    n4.next = &n5;
    n4.prev = &n3;

    n5.next = &n0;
    n5.prev = &n4;

    // Data Insertion in n0,n1,n3;
    n0.data = 0;
    n1.data = 1;
    n3.data = 3;

    cout<<"Print all address\n";
    cout<<"n0 address = "<< &n0<<endl;
    cout<<"n1 address = "<< &n1<<endl;
    cout<<"n2 address = "<< &n2<<endl;
    cout<<"n3 address = "<< &n3<<endl;
    cout<<"n4 address = "<< &n4<<endl;
    cout<<"n5 address = "<< &n5<<endl;
    cout<<"-------------------------------------\n";

    cout<<"\nPrint after insertion address of next value and self\n";
    cout<<"n0.next = "<< n0.next<<endl;
    cout<<"n0.prev = "<< n0.prev<<endl<<endl;

    cout<<"n1.next = "<< n1.next<<endl;
    cout<<"n1.prev = "<< n1.prev<<endl<<endl;

    cout<<"n2.next = "<< n2.next<<endl;
    cout<<"n2.prev = "<< n2.prev<<endl<<endl;

    cout<<"n3.next = "<< n3.next<<endl;
    cout<<"n3.prev = "<< n3.prev<<endl<<endl;

    cout<<"n4.next = "<< n4.next<<endl;
    cout<<"n4.prev = "<< n4.prev<<endl<<endl;

    cout<<"n5.next = "<< n5.next<<endl;
    cout<<"n5.prev = "<< n5.prev<<endl<<endl;
    cout<<"-------------------------------------\n";

    // Print Values of all nodes
    cout<<"Print values of n0 to n5\n";
    cout<<"n0.data = "<< n0.data<<endl;
    cout<<"n1.data = "<< n1.data<<endl;
    cout<<"n2.data = "<< n2.data<<endl;
    cout<<"n3.data = "<< n3.data<<endl;
    cout<<"n4.data = "<< n4.data<<endl;
    cout<<"n5.data = "<< n5.data<<endl;
    cout<<"-------------------------------------\n";

    return 0;
}
