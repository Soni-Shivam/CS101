#include<iostream>
using namespace std;

struct node{
    int val;
    node* next;
};

void insert(node* head, int val){
    node* newNode = new node;
    newNode->val = val;
    if(head == nullptr) {
        head = newNode;
        return;
    }
    // if ll exists
    node* ptr = head;
    while(!ptr->next){
        ptr = ptr->next;
    }
    ptr->next = newNode;
}

int main() {
    node* headA = new node;
    int n, m;
    cout << "enter n and m: ";
    cin >> n >> m;
    for(int i=0; i < n; i++) {
        int temp;
        cout << "enter value for " << i << "th node: ";
        cin >> temp;
    }


    return 0;
}