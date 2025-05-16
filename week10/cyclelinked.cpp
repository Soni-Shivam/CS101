#include<iostream>
#include<vector>
using namespace std;

struct node {
    int val;
    node* next;
};

bool isCycle(node* head) {
    vector<node*> visited = {};
    for(node* temp = head; temp; temp = temp->next){
        for(int i=0; i < visited.size(); i ++) {
            if (temp->next == visited.at(i)) return true;
        }
        visited.push_back(temp);
    }
    return false;
};

int main() {
    int n, num;
    cin >>n;
    node* head = nullptr;
    node* curr = nullptr;
    for (int i=0; i < n ; i++) {
        cin >> num;
        node* newNode = new node{num, nullptr};
        if (!head) head = newNode;
        else{
            node* temp = head;
            while (temp->next != nullptr) temp = temp->next;
            temp->next = newNode;
        }
    }
    cin >> n;
    if (n != -1) {
        node* circ = head;
        for(int i =0; i <n; i++) circ = circ->next;
        for(node* temp = head; temp; temp = temp->next) if (!temp->next) {temp->next = circ; break;}
        cout << ((isCycle(head)) ? "YES" : "NO");
    }
    else cout << "NO";
    return 0;
}