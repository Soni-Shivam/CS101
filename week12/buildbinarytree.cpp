#include<iostream>
using namespace std;


struct node{
    int val;
    node* left;
    node* right;

};

node* buildTree(node* root) {
    cout<< "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node;
    root->val = data;
    if(data==-1) {
        return NULL;
    }
    cout << "Enter the value for left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the value for right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}


/* void printTree(node* root){
    if (!root) return;
    cout << " (" << root->val; 
    printTree(root->left);
    printTree(root->right);
    cout << ") ";
} */

int main() {
   /*  node c3 = {10, nullptr, nullptr};
    node c4 = {50, nullptr, nullptr};
    node c1 = {25, nullptr, nullptr};
    node c2 = {200, &c3, &c4};
    node r = {100, &c1, &c2}; */
    // printTree(&r);

    node* root = buildTree(nullptr);
    root = buildTree(root);
    return 0;
}