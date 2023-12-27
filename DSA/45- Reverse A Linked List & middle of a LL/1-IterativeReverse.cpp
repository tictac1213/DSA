#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int d) {
        this -> data = d;
        this -> next = NULL;
    }
    ~Node() {
        int val = this -> data;
        if (this -> next != nullptr)
        {
            delete next;
            this -> next = nullptr;
        }
        
        cout << "Memory freed for node with value " << val << endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while (temp != nullptr )
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void reverseList(Node* &head){
    Node* prev = nullptr;
    Node* curr = head;

    while (curr != nullptr )
    {
        Node* temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    
    head = prev;

}

int main(){
    
    Node* n = new Node(1);
    Node* head = n;

    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    print(head);

    reverseList(head);

    print(head);
return 0;
}