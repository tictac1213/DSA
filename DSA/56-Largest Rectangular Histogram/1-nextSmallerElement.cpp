// https://www.codingninjas.com/studio/problems/next-smaller-element_1112581?


#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i = n-1; i >= 0 ; i--){
        while(arr[i] <= s.top()){
            s.pop();
        }
        ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}