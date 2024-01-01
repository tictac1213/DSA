//! https://www.codingninjas.com/studio/problems/flatten-a-linked-list_1112655?


#include<bits/stdc++.h>
using namespace std;

/*
 * Definition for linked list.
 */
  class Node {
   public:
 		int data;
 		Node *next;
        Node* child;
 		Node() : data(0), next(nullptr), child(nullptr){};
 		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 };

Node* solve(Node* &f, Node* &s){
    Node* temp = f;
    Node* fptr = f -> child;
    Node* sptr = s;
    while(fptr != NULL && sptr != NULL){
        if(fptr -> data < sptr -> data){
            temp -> child = fptr;
            fptr = fptr -> child;
            temp = temp -> child;
        }
        else{
            temp -> child = sptr;
            sptr = sptr -> child;
            temp = temp -> child;
        }
    }

    while(fptr != NULL){
        temp -> child = fptr;
        fptr = fptr -> child;
        temp = temp -> child;
    }
    while(sptr != NULL){
        temp -> child = sptr;
        sptr = sptr -> child;
        temp = temp -> child;
    }
    temp -> child = NULL;
    return f;
}



Node* merge(Node* head,Node* n){

	if(n == NULL){
		return head;
	}

	if(head == NULL){
		return n;
	}

	if(head -> data < n -> data){
		return solve(head,n);
	}
	else{
		return solve(n,head);
	}

}


Node* flattenLinkedList(Node* head) 
{

	Node* temp = head;
	while(temp -> next != NULL){
		Node* j = temp -> next -> next;
		temp = merge(temp,temp -> next);
		temp -> next = j ;
	}
	
	return temp;
}


int main(){
    


return 0;
}