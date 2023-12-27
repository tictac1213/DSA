// S.C -> O(1),  T.C -> O(n)
// 1) We Find loop 
// 2) Get start
// 3) remove loop
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node()
    {
        int val = this -> data;
        if( this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory freed of node with value " << val << endl;
    }
};


Node* floydCycleDetection(Node* head){
    if( head == NULL){
        return NULL;
    }
    Node* tortoise = head;
    Node* hare = head;

    while (tortoise != NULL && hare != NULL  )
    {

        tortoise = tortoise -> next;
        hare = hare -> next;
        if( hare != NULL ){
            hare = hare -> next;
        }

        if( tortoise == hare ){
            return hare;
        }

    }
    
    return NULL;
}

Node* getStart(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydCycleDetection(head);

// Checking if loop is present
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    while (slow != intersection )
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;   
}

void removeLoop(Node* head){
    Node* start = getStart(head);
    Node* temp = start;
    // Checking if loop is present
    if(start == NULL){
        return;
    }
    while (temp -> next != start)
    {
        temp = temp-> next;
    }
    temp -> next = NULL;
}

int main(){
    


return 0;
}