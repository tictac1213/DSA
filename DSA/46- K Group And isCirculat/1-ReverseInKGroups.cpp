// https://leetcode.com/problems/reverse-nodes-in-k-group/

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
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory freed for node with value "<< value << endl;
    }
};


Node* kReverse(Node* head, int k){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* temp = head;
    int cnt = 1;
    while (cnt <= k && temp != NULL)
    {
        temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
        cnt++;
    }
    
    head -> next = kReverse(curr, k);


    return prev;
}


int main(){



return 0;
}