// Binary Search Tree(BST). Insert & Delete.

#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int value){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> left = temp -> right = NULL;
    return temp;
};

void traverseInOrder(struct Node *temp){
    if(temp != NULL){
        traverseInOrder(temp -> left);
        cout<<" "<<temp -> data;
        traverseInOrder(temp -> right);
    }
}

struct Node* insertData(struct Node* root, int data){
    if(root == NULL){
        return newNode(data);
    }else{
        if(data < root -> data){
            root -> left = insertData(root -> left, data);
        }else{
            root -> right = insertData(root -> right, data);
        }
    }
    return root;
};

/*
struct Node* deleteData(struct Node* root,int deleteData){
    if(root == NULL){
        cout<<"Empty Data\n";
    }
};
*/

int main(){
    struct Node* root = NULL;
    root = newNode(50);

    int key;
    for(int i = 0; i < 5; i++){
        cout<<"Enter Data: ";
        cin>>key;
        insertData(root,key);
    }
    traverseInOrder(root);
    return 0;
}
