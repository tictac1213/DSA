// https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?

#include<bits/stdc++.h>
using namespace std;



void insertAtBottom(stack<int> &stack , int k)
{
    if(stack.empty()){
        stack.push(k);
        return;
    }


    int j = stack.top();
    stack.pop();
    insertAtBottom(stack,k);
    stack.push(j);
}

void reverseStack(stack<int> &stack) {

    if(stack.empty()){
        return;
    }

    int k = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,k);


}

int main(){
    


return 0;
}