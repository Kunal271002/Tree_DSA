#include<iostream>    //There are 4 types of traversal PreOrder, PostOrder, Inorder and Level Order;
using namespace std;
struct Node{
    int Data;
    Node *left;
    Node *right;
};
Node *traversal(int value){
    Node *node = new Node;
    node->Data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void print(Node *n){
    while(n != NULL){
        cout<<n->Data<<" ";
        n = n->right;
    }
}
void Inorder(Node *root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);

    cout<<root->Data<<" ";

    Inorder(root->right);
}
int main(){
    Node *root = traversal(5);
    root->left = traversal(6);
    root->right = traversal(7);
    root->left->left = traversal(8);
    root->left->right = traversal(9);
    root->right->left = traversal(10);
    root->right->right = traversal(11);
    Inorder(root);
}