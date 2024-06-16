#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};

Node * InsertElement(int value){
    Node *node = new Node();
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void print(Node *n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->left;
    }
}
int main()
{
    Node *root = InsertElement(5);
    root->right = InsertElement(6);
    root->left = InsertElement(7);
    root->left->right = InsertElement(8);
    root->left->left = InsertElement(9);
    print(root);
}