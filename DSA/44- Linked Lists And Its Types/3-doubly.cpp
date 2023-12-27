#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        // constructor
        Node(int d){
            this -> data = d;
            this -> next = nullptr;
            this -> prev = nullptr;
        }

        // destructor
        ~Node() {
            int val = this -> data;
            if (next != nullptr )
            {
                delete next;
                next = nullptr;
            }
            
            cout << "Memory freed with data "<< val << endl;
        }
};


void print(Node* &head){
    Node* temp = head;
    while (temp != nullptr )
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while (temp != nullptr )
    {   
        length++;
        temp = temp -> next;
    }
    return length;
}

void insertAtHead(Node* &head, Node* &tail, int d){
    // when liust is empty we need to handle it seperately
    if (head == nullptr)
    {
         Node*temp = new Node(d);
         head = temp;
         tail = temp;
    }
    else{
    Node * temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int d){
    if (tail == nullptr)
    {
        Node*temp = new Node(d);
         head = temp;
         tail = temp;
    }
    else{

    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    } 
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }
Node* curr = head;
int cnt = 1;
    while (cnt < position-1 && curr -> next != nullptr)
    {
        curr = curr -> next;
        cnt++;
    }
    
    
    
    if (curr -> next == NULL)
    {
        insertAtTail(tail,head,d);
        return;
    }
    Node * nodeToTnsert = new Node(d);
    nodeToTnsert -> next = curr -> next;
    nodeToTnsert -> prev = curr;
    (curr -> next) -> prev = nodeToTnsert;
    curr -> next = nodeToTnsert;
    

}

void deleteNode(int position, Node* &head, Node* &tail){

    if(position == 1){
        Node* temp = head;
        head = head -> next ;
        //  imp to delete connection
        temp -> next = nullptr;
        delete temp;
    }
    else{

        Node* curr = head;
        Node* prev = nullptr;
        int cnt = 1;
        while (cnt < position && curr -> next != nullptr )
        {
            prev = curr;
            curr = curr -> next; 
            cnt++;
        }
        if(curr -> next == nullptr ){
            curr -> prev = nullptr;
            prev -> next = curr -> next;
            tail = prev;
            delete curr;
        }
        else{
            curr -> prev = nullptr;
            prev -> next = curr -> next;
            (curr -> next) -> prev = prev;
            curr -> next = nullptr;
            delete curr;
        }
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    print(head); 
    insertAtHead(head,tail,5);
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


    cout << getLength(head) << endl;

    deleteNode(3,head,tail);
    print(head);
    deleteNode(6,head,tail);
    print(head);
    deleteNode(1,head,tail);
    print(head);
    cout<< "Tail " << tail -> data << endl;
    cout<< "head " << head -> data << endl;
return 0;
}