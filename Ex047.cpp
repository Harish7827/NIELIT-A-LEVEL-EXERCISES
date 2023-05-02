// Traverse All Nodes of tree
// Post - Order
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
// Traverse Post - Order
void traversePostOreder(struct Node *temp){
    if(temp != NULL){
        traversePostOreder(temp -> left);
        traversePostOreder(temp -> right);
        cout<<" "<<temp -> data;
    }
}
int main(){
    struct Node* root = newNode(50);
    root -> left = newNode(30);
    root -> right = newNode(60);
    root -> left -> left = newNode(25);
    root -> left -> right = newNode(40);
    root -> left -> right -> left = newNode(35);
    root -> right -> right = newNode(70);
    root -> right -> right -> left = newNode(65);
    cout<<"Post - Order Traverse (Left,Right,Root) : ";
    traversePostOreder(root);
    return 0;
}

