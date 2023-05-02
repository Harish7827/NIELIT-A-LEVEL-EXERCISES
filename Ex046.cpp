// Traverse All Nodes of tree
// In - Order
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left, *right;
};
// New Node Creation
struct Node *newNode(int data){
    struct Node *Node = (struct Node*) malloc(sizeof(struct Node));
    Node -> data = data;
    Node -> left = NULL;
    Node -> right = NULL;
    return Node;
};
// Traverse In - Order
void traverseInOrder(struct Node *temp){
    if(temp != NULL){
        traverseInOrder(temp -> left);
        cout<<" "<<temp -> data;
        traverseInOrder(temp -> right);
    }
}
int main(){
    struct Node* root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> right -> left = newNode(6);
    root -> right -> right = newNode(7);
    cout<<"In - Order Traverse (Left,Root,Right) : ";
    traverseInOrder(root);
    return 0;
}
