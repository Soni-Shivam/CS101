#include<iostream>
using namespace std;


struct node{
    int val;
    node* next;
}

node* reverseLinkedList(node* head) {
    node* prev = nullptr;
    node* curr = head;
    node* next = nullptr;

    while(curr!=nullptr) {
        node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}


int main() {

    return 0;
}