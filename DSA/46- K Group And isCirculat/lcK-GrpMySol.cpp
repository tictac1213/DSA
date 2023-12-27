// https://leetcode.com/problems/reverse-nodes-in-k-group/

#include<bits/stdc++.h>

using namespace std;

//  * Definition for singly-linked list.
 struct ListNode {
    int val;
      ListNode *next;
 
 };
//  
class Solution {
public:

    bool lengthCheck(ListNode* head, int k){
        int len = 1;
        while(head != NULL){
           if(len >= k){
               return false;
           }
            head = head -> next;
           len++;

        }
        return true;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

    if((head == NULL || head -> next == NULL) || lengthCheck(head,k)){
        return head;
    }

    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* temp = head;
    ListNode* connect = head;
    int cnt = 0;
    while (cnt < k && temp != NULL)
    {
        temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
        cnt++;
    }


    if(curr != NULL){
        
    connect -> next = reverseKGroup(curr,k);
    // cout<< curr -> val;
    }

    return prev;


    }
};

int main(){
    
    Solution s;
    // cout<< s. ;
    return 0;
}