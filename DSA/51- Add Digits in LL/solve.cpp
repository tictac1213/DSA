// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

#include<bits/stdc++.h>
using namespace std;

// * node for linked list:'
// structures can have constructors

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};



class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    void insertAtHead(Node* &head,int d){
        if(head == NULL){
            Node* n = new Node(d);
            head = n;
        }
        else{
          Node* n = new Node(d);
          n -> next = head;
            head = n;  
        }
    }
    
    void reverse(Node* &head){
        Node* prev = NULL;
        Node* temp = head;
        Node* curr = head;
        while(temp != NULL){
            temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        reverse(first);
        reverse(second);
        Node* ans = NULL, * fptr = first, * sptr = second;
        int carry = 0;
        while(fptr != NULL || sptr != NULL || carry != 0){
            int v1 = 0, v2 = 0;
    
            if(fptr != NULL){
                v1 = fptr-> data;
                fptr = fptr -> next;
            }
            
            if(sptr != NULL){
                v2 = sptr-> data;
                sptr = sptr -> next;
            }
            int s = v1 + v2 + carry;
            int digit = s%10;
            carry = s/10;
            insertAtHead(ans,digit);
        }
        
        return ans;
    }
};

int main(){
    


return 0;
}