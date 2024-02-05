#include <bits/stdc++.h> 
using namespace std;

class NQueue{
    int* arr;
    int* next;
    int* front;
    int* rear;
    int free;
public:
    // Initialize your data structure.
    NQueue(int n, int s){
        front = new int[n];
        arr = new int[s];
        next = new int[s];
        rear = new int[n];
        free = 0;
        for(int i = 0; i < s-1 ; i++){
            next[i] = i+1;
        }
        for(int i = 0; i < n ; i++){
            front[i] = -1;
            rear[i] = -1; 
        }
        next[s-1] = -1;
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){

        if(free == -1){
            return false;
        }
        m--;
        
        if(front[m] == -1){
            int i = free;
            front[m] = i;
            rear[m] = i;
            free = next[free];
            arr[i] = x;
        //    cout <<  "h "; 
        }
        else{
            // cout << "k ";
            int i = free;
            free = next[free];
            next[rear[m]] = i;
            rear[m] = i;
            arr[i] = x;
        }
        

        return true;    
        // Write your code here.
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        // Write your code here.
        m--;
        if(front[m] == -1){
            return -1;
        }

        int i = front[m];
        if(front[m] == rear[m]){
            front[m] = -1;
        }
        else{
            front[m] = next[front[m]];
        }
        if(free == -1){

            free = i;
            next[free] = -1;
        }
        else{

            next[i]=free;
            free = i;
        }



        return arr[i];
        
    }
};