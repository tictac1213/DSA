// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1


// O(n)  O(n) Approach 1 copy all elements on LL in array 
// O(n)  O(1) Approach 2 Find mid and reverse the part after mid and compare 2 parts

//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
  
    Node* Reverse (Node* head){
        
        Node* prev = NULL;
        Node* temp = head;
        Node* curr = head;
        
        while( temp != NULL)
        {
            temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }
    
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast-> next;
            fast = fast-> next;
        }
    
        Node* ans= Reverse(slow);
        return ans;
        
    }
    bool isPalindrome(Node *head)
    {
     
     Node* firstHalf = head;
     Node* secondHalf = getMid(head);
     Node* Half = getMid(head);
     
     while(firstHalf != NULL && firstHalf != Half ){
         if(firstHalf -> data != secondHalf -> data){
             return 0;
         }
         firstHalf = firstHalf -> next;
         secondHalf = secondHalf -> next;
     }
     
     return 1;   
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends