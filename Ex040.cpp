// Implement singly linked list using pointer in node structure;
// Select 2 is not working(Working on progress)
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;
void insertion(int newData){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> data = newData;
    newNode -> next = head;
    head = newNode;
}

void append(int newData){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* temp;
    newNode -> data = newData;
    newNode -> next = NULL;
    temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void deleteHead(){
    if (head == NULL){
        cout<<"Data Set is Empty\n";
    }else{
        struct Node* ptr;
        ptr = head -> next;
        delete head;
        head = ptr;   
    }
}

void deleteTail(){
    if(head == NULL){
        cout<<"Data Set is Empty\n";
    }else{
        struct Node *ptr, *temp;
        ptr = head;
        while(ptr -> next -> next != NULL){
            ptr = ptr -> next;
        }
        temp = ptr -> next;
        delete temp;
        ptr -> next = NULL;
    }
}

void deleteValue(int deleteData){
    struct Node *ptr, *temp;

}

void display(){
    if(head == NULL){
        cout<<"Empty Set\n";
    }
    else{
        struct Node* ptr;
        ptr = head;
        while(ptr != NULL){
            cout<< ptr -> data <<" ";
            ptr = ptr -> next;
        }
    }
}

int main(){
    while(true){
        int select;
        cout<<"\n1. Insertion at Starting\t2. Append at the end\t3. Delete Head\t4. Delete Tail\t5. Display\t6. Exit\n";
        cout<<"Select : ";
        cin>>select;

        if(select == 1){
            int number;
            cout<<"Enter the size of linked list: ";
            cin>>number;

            for(int i = 1; i <= number; i++){
                int store;
                cout<<"Enter the value: ";
                cin>>store;
                insertion(store);
            }
        }else if(select == 2){
            int appendData;
            cout<<"Enter Number: ";
            cin>>appendData;
            append(appendData);
        }else if(select == 3){
            deleteHead();
        }else if(select == 4){
            deleteTail();
        }else if(select == 5){
            cout<<"The List is given below: \n";
            display();
            cout<<endl;
        }else if(select == 6){
            cout<<"Thank You\n";
            break;
        }else{
            cout<<"\aYou Have Entered Invalid Number\a\n";
        }
    }
    return 0;
}
