// https://leetcode.com/problems/largest-rectangle-in-histogram/description/

#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> NextSmallerElementIndex(vector<int> v, int n){
        vector<int> next(n);
        stack<int> k;
        k.push(-1);
        for(int i = n - 1; i >= 0 ; i--){
            if( k.top() == -1){
                next[i] = i;
                k.push(i);
            }
            else{
                if(v[i] > v[k.top()]){
                    next[i] = k.top(); 
                    k.push(i);
                }
                else{
                    while( k.top() != -1 && v[i] <= v[k.top()]){
                        k.pop();
                    } 
                    if( k.top() == -1)
                        next[i] = n;
                    else
                        next[i] = k.top();
                    k.push(i);
            }
                }
            }
            next[n-1]=n;
            return next;
    }


    vector<int> prevSmallerElementIndex(vector<int> v, int n){
        vector<int> next(n);
        stack<int> k;
        k.push(-1);
        for(int i = 0; i < n ; i++){
            if( k.top() == -1){
                next[i] = i;
                k.push(i);
            }
            else{
                if(v[i] > v[k.top()]){
                    next[i] = k.top(); 
                    k.push(i);
                }
                else{
                    while( k.top() != -1 && v[i] <= v[k.top()]){
                        k.pop();
                    } 
                    if( k.top() == -1)
                        next[i] = -1;
                    else
                        next[i] = k.top();
                    k.push(i);
            
                }
            }

        }
        next[0] = -1;
        return next;
    }

    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next = NextSmallerElementIndex(heights,n);
        vector<int> prev = prevSmallerElementIndex(heights,n);
        int area = INT_MIN;
        // for(int i = 0; i < n; i++){
        //     cout<< next[i] << " " << prev[i]<< endl; 
        // }
        for(int i = 0; i < n; i++){
            int temp = (next[i] - prev[i] - 1)*heights[i];
            // cout << temp << " ";
            temp = max(temp,heights[i]);
            area = max(area,-temp);
            area = max(area,temp);
        }

        return area;
    }
};

int main(){
    


return 0;
}
