// https://www.codingninjas.com/studio/problems/sort-a-stack_985275?
// T.C - O(n^2)
#include<bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &stack, int k){
	if(stack.empty()){
		stack.push(k);
		return;
	}
	if(stack.top() > k){
		int j =  stack.top();
		stack.pop();
		sortedInsert(stack, k);
		stack.push(j);
	}
	else{
		stack.push(k);
	}	
}


void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}
	int k = stack.top();
	stack.pop();
	sortStack(stack);
	sortedInsert(stack, k);
}

int main(){
    


return 0;
}