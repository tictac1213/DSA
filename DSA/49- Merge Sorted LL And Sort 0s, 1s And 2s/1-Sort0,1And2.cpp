// https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937

// Count 0s, 1s And 2s then again start from head and allot values
// When changing data not allowed maintain a lists for 0, 1 & 2 each then join the make sure of empty lists

/*
Following is the class structure of the Node class:
*/
#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

void insertAtHead(Node* &head,Node* &tail, Node* j){
    if(head == NULL){
        j -> next = NULL;
        head = j;
        tail = j;
    }
    else{
        j -> next = head;
        head = j;
    }

}


Node* sortList(Node *head){
    Node* zero = NULL;
    Node* one = NULL;
    Node* two = NULL;
    Node* zerot = NULL;
    Node* onet = NULL;
    Node* twot = NULL;
    Node* temp = head;
    Node* curr = head;
    while(temp != NULL){
        Node* curr = temp;
        switch(temp -> data){
            case 0: temp = temp -> next; insertAtHead(zero,zerot,curr); break;
            case 1: temp = temp -> next; insertAtHead(one,onet,curr); break;
            case 2: temp = temp -> next; insertAtHead(two,twot,curr); break;
        }
    }
    zerot -> next = one;
    onet -> next = two;
    
    return zero;
}