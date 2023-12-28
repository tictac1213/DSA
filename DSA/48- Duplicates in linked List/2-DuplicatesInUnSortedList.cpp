// https://www.codingninjas.com/studio/problems/remove-duplicates-from-unsorted-linked-list_1069331
// TODO Had problem implementing 
// ! 3 Approaches
/* 
   !    T.C    S.C 
    1) O(n^2) O(1)  ->  traverse the remaining  LL for each node delete on the go

    2) O(nlogn) O(1) -> sort LL then do as in sorted

    3) O(n)  O(n) -> map <value,bool>
*/


/****************************************************************
    Following is the class structure of the Node class:
*****************************************************************/
/*
    Time Complexity: O(N)
    Space Complexity: O(N)

    Where N is the number of nodes in the Linked list.
*/

#include <unordered_map>
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

Node *removeDuplicates(Node *head)
{

    Node *curr = head;

    // Keep track of previous node.
    Node *prev = NULL;

    unordered_map<int, bool> seen;

    // Iterate over the given linked list.
    while (curr != NULL)
    {
        int val = curr->data;

        if (seen[val])
        {
            // Node has been encountered before, so its a duplicate.
            // Firstly update the next pointer of the previous node.
            prev->next = curr->next;

            // Delete the duplicate node.
            delete curr;

            // Move on to the next node.
            curr = prev->next;
        }
        else
        {
            // Node is seen for the first time, so add it to hash table.
            seen[val] = true;

            // Move on to the next node.
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}