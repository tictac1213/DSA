// https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1


// ! Approach 1 Traverse and finf which node does arb points to O(n^2) O(1)

// * Approach 2 Use Map O(n) O(n) - Solution

// * Approach 3 O(n) O(1) - Solution1 mixing orignal and clone


#include<bits/stdc++.h>
using namespace std;

// * node for linked list:'
// structures can have constructors

struct Node {
    int data;
    struct Node* next;
    struct Node* arb;
    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};





class Solution
{
    public:

    Node *copyList(Node *head)
    {
        unordered_map<Node*,Node*> registor;
        Node* copy=  new Node(head -> data);
        Node* j = copy;
        Node* temp = head;
         registor[temp] = j;
        while(temp-> next != NULL){
           temp = temp -> next;
           j -> next = new Node(temp -> data);
           j = j -> next;
            registor[temp] = j;
           
        }
    
        j = copy;
        temp = head;
        while(temp != NULL){
            
            if(temp -> arb != NULL){
                
            j -> arb = registor[temp -> arb];
            j = j -> next;
            temp = temp -> next;
            }
            else{
               j -> arb = NULL;
            j = j -> next;
            temp = temp -> next; 
            }
        
        }
        
        
        return copy;
    }

};




int main(){
    


return 0;
}