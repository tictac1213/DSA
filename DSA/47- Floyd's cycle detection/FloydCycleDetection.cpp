// S.C -> O(1),  T.C -> O(n)

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


bool floydDetection(Node* head){
    if( head == NULL){
        return false;
    }
    Node* tortoise = head;
    Node* Hare = head;

    while (tortoise != NULL && hare != NULL  )
    {

        tortoise = tortoise -> next;
        hare = hare -> next
        if( hare != NULL ){
            hare = hare -> next;
        }

        if( tortoise == hare ){
            return 1;
        }

    }
    
    return 0;
}

int main(){
    


return 0;
}