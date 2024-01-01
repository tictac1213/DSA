// ! https://www.codingninjas.com/studio/problems/mergesort-linked-list_630514?

#include<iostream>
using namespace std;
/********************************************************************

    Following is the representation of the Singly Linked List Node:
********************************************************************/

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    

node* solve(node* &f, node* &s){
    node* temp = f;
    node* fptr = f -> next;
    node* sptr = s;
    while(fptr != NULL && sptr != NULL){
        if(fptr -> data < sptr -> data){
            temp -> next = fptr;
            fptr = fptr -> next;
            temp = temp -> next;
        }
        else{
            temp -> next = sptr;
            sptr = sptr -> next;
            temp = temp -> next;
        }
    }

    while(fptr != NULL){
        temp -> next = fptr;
        fptr = fptr -> next;
        temp = temp -> next;
    }
    while(sptr != NULL){
        temp -> next = sptr;
        sptr = sptr -> next;
        temp = temp -> next;
    }
    temp -> next = NULL;
    return f;
}


node* merge(node* &f, node* &s){
    if(f == NULL){
        return s;
    }
    if( s == NULL)
        return f;

    if(f -> data > s -> data){
        return solve(s,f);
    }    
    else{
        return solve(f,s);
    }
}

node* mergeSort(node *head) {
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node* temp = head;
    node* prev = NULL;
    node* secondHalf = head;
    while(temp != NULL && temp -> next != NULL ){
        temp = temp -> next;
        temp = temp -> next;
        prev = secondHalf;
        secondHalf = secondHalf -> next;
    }
    prev -> next = NULL;
    head = mergeSort(head);
    secondHalf = mergeSort(secondHalf);
    head = merge(head,secondHalf);

    return head;
}
