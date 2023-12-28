#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int val =this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory freed for node with value " << val << endl;
    }
};

Node * removeDuplicates(Node *head)
{
    Node* temp = head;
    while(temp -> next != NULL){
        if(temp-> data == (temp -> next) -> data ){
            Node* n = temp -> next;
            temp -> next = temp -> next -> next;
            n -> next = NULL;
            delete n; 
        }
        else{
            temp = temp -> next;
        }
    }

    return head;
}

int main(){
    


return 0;
}