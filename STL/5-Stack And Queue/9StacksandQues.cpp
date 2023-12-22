// Stacks And Ques

#include<bits/stdc++.h>


using namespace std;

int main()
{
    // Stack - lifo datastructure
    // Queues Fifo
    stack <int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())//s.empty return boolean value
    {
        cout<<s.top()<<" ";
         s.pop();
    }
    queue <int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while(!q.empty())//s.empty return boolean value
    {
        cout<<q.front()<<" ";
        q.pop();
    } 


    return 0;
}