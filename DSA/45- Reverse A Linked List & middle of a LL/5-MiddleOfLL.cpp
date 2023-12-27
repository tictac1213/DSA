// Approach 1 -> get length of LL then traverse n/2 - O(n)
// Approach 2 ->  2 pointers 1 move 2 steps 1 m0ve 1 step  - O(n/2)

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

    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }    
        cout<< "Memory Freed for node with value " << val <<endl;
    }
}

void findMiddleNode()



int main(){
    


return 0;
}