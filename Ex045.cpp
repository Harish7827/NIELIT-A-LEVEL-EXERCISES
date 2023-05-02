// Traverse All Nodes of tree
// Pre - Order
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
// Traverse Pre - Order
void traversePreOreder(struct Node *temp){
    if(temp != NULL){
        cout<<" "<<temp -> data;
        traversePreOreder(temp -> left);
        traversePreOreder(temp -> right);
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
    cout<<"Pre - Order Traverse (Root,Left,Right) : ";
    traversePreOreder(root);
    return 0;
}
