// https://www.codingninjas.com/studio/problems/two-stacks_983634?

#include <bits/stdc++.h> 
class TwoStack {
        int * arr;
        int s1;
        int s2;
        int top1;
        int top2;
        int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        arr = new int[s];
        size = s;
        s1 = 0;
        top1 = -1;
        s2 = 0;
        top2 = s;

    }
    
    // Push in stack 1.
    void push1(int num) {
        if(s1 + s2 < size ){
            top1++;
            s1++;
            arr[top1]=num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(s1 + s2 < size ){
            top2--;
            s1++;
            arr[top2]=num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 > -1){
            s1--;
            return arr[top1--];
        }
        return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size){
            s2--;
            return arr[top2++];
        }
        return -1;
    }
};
