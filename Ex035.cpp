// Implement Singly Link List Using Structure;

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}n0,n1,n2,n3,n4,n5;

int main(){
    n1.data = 1;
    n3.data = 3;
    n4.data = 4;

    // Print Values of all nodes
    cout<<"n1.data = "<< n1.data<<endl;
    cout<<"n3.data = "<< n3.data<<endl;
    cout<<"n4.data = "<< n4.data<<endl;
    cout<<"------------------------------\n";

    // Print Address of all nodes
    cout<<"n0 Address = "<<&n0<<endl;
    cout<<"n1 Address = "<<&n1<<endl;
    cout<<"n2 Address = "<<&n2<<endl;
    cout<<"n3 Address = "<<&n3<<endl;
    cout<<"n4 Address = "<<&n4<<endl;
    cout<<"n5 Address = "<<&n5<<endl;
    cout<<"------------------------------\n";

    // Assign and print next address
    n1.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    cout<<"n1.next = "<< n1.next<<endl;
    cout<<"n3.next = "<< n3.next<<endl;
    cout<<"n4.next = "<< n4.next<<endl;
    cout<<"------------------------------\n";

    // Insert n2 between n1 and n3 || n5 at the tail || n0 at head
    n2.data = 2;
    n2.next = n1.next;
    n1.next = &n2;

    n5.data = 5;
    n5.next = NULL;
    n4.next = &n5;

    n0.data = 0;
    n0.next = &n1;

    // Print after insertion address of next value and self;
    cout<<"\nPrint after insertion address of next value and self\n";
    cout<<"n0.next = "<< n0.next<<endl;
    cout<<"n1.next = "<< n1.next<<endl;
    cout<<"n2.next = "<< n2.next<<endl;
    cout<<"n3.next = "<< n3.next<<endl;
    cout<<"n4.next = "<< n4.next<<endl;
    cout<<"n5.next = "<< n5.next<<endl<<endl;

    cout<<"n0 address = "<< &n0<<endl;
    cout<<"n1 address = "<< &n1<<endl;
    cout<<"n2 address = "<< &n2<<endl;
    cout<<"n3 address = "<< &n3<<endl;
    cout<<"n4 address = "<< &n4<<endl;
    cout<<"n5 address = "<< &n5<<endl;
    cout<<"------------------------------\n";

    // Delete n2 between n1 and n3 (Intermidiate)
    n2.next = n3.next;
    delete &n3;
    cout<<"N3 DELETED\n";
    cout<<"Print after insertion address of next value and self\n";
    cout<<"n0.next = "<< n0.next<<endl;
    cout<<"n1.next = "<< n1.next<<endl;
    cout<<"n2.next = "<< n2.next<<endl;
    cout<<"n3.next = "<< n3.next<<endl;
    cout<<"n4.next = "<< n4.next<<endl;
    cout<<"n5.next = "<< n5.next<<endl<<endl;

    // Delete Tail
    n4.next = NULL;
    delete &n5;
    cout<<"N5 DELETE\n";
    cout<<"Print after insertion address of next value and self\n";
    cout<<"n0.next = "<< n0.next<<endl;
    cout<<"n1.next = "<< n1.next<<endl;
    cout<<"n2.next = "<< n2.next<<endl;
    cout<<"n3.next = "<< n3.next<<endl;
    cout<<"n4.next = "<< n4.next<<endl;
    cout<<"n5.next = "<< n5.next<<endl<<endl;

    // Delete Head
    delete &n0;
    cout<<"N0 DELETED\n";
    cout<<"Print after insertion address of next value and self\n";
    cout<<"n0.next = "<< n0.next<<endl;
    cout<<"n1.next = "<< n1.next<<endl;
    cout<<"n2.next = "<< n2.next<<endl;
    cout<<"n3.next = "<< n3.next<<endl;
    cout<<"n4.next = "<< n4.next<<endl;
    cout<<"n5.next = "<< n5.next<<endl<<endl;
    return 0;
}
