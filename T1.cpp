#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void displayReverse(Node* head){
    if(head == NULL) return;
    displayReverse(head->next);
    cout << head->data << " ";
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    displayReverse(head);
}