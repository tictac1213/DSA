#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    // c onstructor
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }

    // destructor
    ~Node(){
         int value = this -> data;
        //  memo free
        if(this->next != nullptr){
            delete next;
            this -> next = nullptr;
        }

        cout << "Memory freed for node with data " << value <<endl;
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


void deleteNode( int position, Node* &head, Node* &tail){
    if (position == 1)
    {
        Node* temp = head ;
        head = head -> next;
        // memory free note that we need to make sure that the node we are deleting points to a nullptr as our destructor otherwise will delete whole linkedlist
        temp -> next = nullptr;
        delete temp;
        
    }
    else
    {
        
        Node *prev = nullptr, *current = head;
        while (--position && current -> next != nullptr)
        {
            prev = current;
            current = current -> next;
        }
        
        if(current -> next == nullptr){
            prev -> next = nullptr;
            tail = prev;
            delete current;
            return;
        }
        
        prev -> next = current -> next;
        current-> next = nullptr;
        delete current;

    }
    
}


int main(){
    Node* node1 = new Node(10);
    
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,9);
    insertAtHead(head,2);
    insertAtHead(head,8);
    insertAtTail(tail,6);
    insertAtTail(tail,1);
    insertAtTail(tail,5);
    print(head);
    deleteNode(2,head,tail);
    print(head);
    deleteNode(6,head,tail);
    print(head);
    deleteNode(1,head,tail);
    print(head);

    cout<< "Tail " << tail -> data << endl;
    cout<< "head " << head -> data << endl;

return 0;
}