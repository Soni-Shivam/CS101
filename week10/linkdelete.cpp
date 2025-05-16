#include <iostream>
using namespace std;

struct node {
    int val;
    node* next;
};

int main() {
    int n, v, index;
    char op;
    node* Head = nullptr;
    cin >> n;
    while (n--) {
        cin >> op;
        if (op == 'I') {
            cin >> v;
            node* newNode = new node{v, nullptr};
            if (!Head) Head = newNode;
            else {  
                node* temp = Head;
                while (temp->next != nullptr) temp = temp->next;
                temp->next = newNode;
            }
        } 
        else if (op == 'D') {
            cin >> index;
            if (index == 0) {
                node* temp = Head;
                Head = Head->next;
                delete temp;
            } else {
                node *prev = Head, *curr = Head->next;
                for (int i = 1; i < index; i++) prev = curr, curr = curr->next;
                prev->next = curr->next;
                delete curr;
            }
        }
    }
    for (node* temp = Head; temp; temp = temp->next) cout << temp->val << " ";
    return 0;
}