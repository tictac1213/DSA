#include<bits/stdc++.h>
using namespace std;


class Node
{
private:

public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d){
    
    Node* node = new Node(d);
    tail -> next = node;
    tail = tail -> next;
}

void insertAtPosition(Node* &head,Node* &tail, int pos , int d){
    Node* temp = head;

    if(pos<=1){
        insertAtHead(head,d);
        return;
    }
    
    int i = 1;
    for (; i < pos-1 && temp->next != nullptr ; i++)
    {
        temp = temp -> next;
    }
    
    if(i != pos-1 ){
        cout << "Linked list is not long enough so element inserted at last \n";
        insertAtTail(tail,d);
        return;
    }
// If we have to insert at last we need to update tail
    if( temp -> next == nullptr ){
        insertAtTail(tail,d);
        return;
    }


        Node* n = new Node(d);
        n -> next = temp -> next ;
        temp -> next = n;
       

        return;
    
    
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


int main(){
    
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node* head = node1;
    Node* tail = head;
    insertAtHead(head,12);
    print(head);

    insertAtTail(tail,15);
    print(head);
    cout<< "Inserting 0 at 2nd pos \n";
    insertAtPosition(head,tail,2,0);
    print(head);
    cout<< "Inserting -1 at 1st pos \n";
    insertAtPosition(head,tail,1,-1);
    print(head);
    cout<< "Inserting 9 at 4th pos \n";
    insertAtPosition(head,tail,4,9);
    print(head);
    cout<< "Inserting 4 at 9th pos \n";
    insertAtPosition(head,tail,9,4);
    print(head);
    cout<< "Inserting 8 at 8th pos \n";
    insertAtPosition(head,tail,8,8);
    print(head);

    cout<< "Tail " << tail -> data << endl;
    cout<< "head " << head -> data << endl;

return 0;
}