#include<iostream>
using namespace std;


struct node{
    int val;
    node* left;
    node* right;
};

void printTree(node* root){
    if (!root) return;
    cout << " (" << root->val; 
    printTree(root->left);
    printTree(root->right);
    cout << ") ";
}

int main() {
    node c3 = {10, nullptr, nullptr};
    node c4 = {50, nullptr, nullptr};
    node c1 = {25, nullptr, nullptr};
    node c2 = {200, &c3, &c4};
    node r = {100, &c1, &c2};
    printTree(&r);
    return 0;
}