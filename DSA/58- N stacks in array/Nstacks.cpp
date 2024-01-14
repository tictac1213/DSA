#include<bits/stdc++.h>
using namespace std;

class NStack
{
public:
    // Initialize your data structure.
    int* arr;
    int* prev;
    int* t;  
    stack<int> em;
    int Size; 
    NStack(int N, int S)
    {
        Size = S;
        arr = new int[S];
        prev = new int[S];
        t = new int[N];
        for(int i = 0; i < N ; i++){
            t[i] = -1;
        }
        for(int i = 0; i < S ; i++){
            prev[i] = -1;
            em.push(i);
        }
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(em.size() > 0){
            int ptr = em.top();
            arr[ptr] = x;
            prev[ptr] = t[m-1];
            t[m-1] = ptr;
            em.pop();
            return true;
        }

        return false;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if( t[m-1] == -1 ){
            return -1;
        }
        else{
            int j = arr[t[m-1]];
            em.push(t[m-1]);
            t[m-1] = prev[t[m-1]];
            return j;
        }
            
        

    }
};

int main(){
    


return 0;
}