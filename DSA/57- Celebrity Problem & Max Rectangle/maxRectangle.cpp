// https://www.geeksforgeeks.org/problems/max-rectangle/1

// unoptimized approach


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

vector<int> nextSmallerIndex(int* arr, int m){
    stack<int> k;
    k.push(-1);
    vector<int> ans(m);
    for( int i = m-1 ; i >= 0 ; i--){
        if(k.top() == -1 ){
            ans[i] = m;
        }
        else{
            while( k.top() != -1 && arr[k.top()] >= arr[i]){
                k.pop();
            }
            if(k.top() == -1 ){
                ans[i] = m;
            }
            else{
                ans[i] = k.top();
            }
        }
        k.push(i);
    }
    
    return ans;
}

vector<int> prevSmallerIndex(int* arr, int m){
    stack<int> k;
    k.push(-1);
    vector<int> ans(m);
    for( int i = 0 ; i < m ; i++){
        if(k.top() == -1 ){
            ans[i] = -1;
        }
        else{
            while( k.top() != -1 && arr[k.top()] >= arr[i]){
                k.pop();
            }
            if(k.top() == -1 ){
                ans[i] = -1;
            }
            else{
                ans[i] = k.top();
            }
        }
        k.push(i);
    }
    
    return ans;
}




int Marea(int* arr, int m){
    vector <int> next = nextSmallerIndex(arr,m);
    vector <int> prev = prevSmallerIndex(arr,m);
    int area = INT_MIN;
    for( int i = 0; i < m; i++){
        area = max(area,arr[i]);
        int temp = (next[i] - prev[i] - 1)*arr[i];
        // cout << prev[i] << next[i]  << temp << " ";
        area = max(area,temp);
       
    }
    // cout << endl;
    return area;
}




class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        int area = Marea(M[0],m);

        for(int i = 1; i < n ; i++){
            for(int j =0; j < m ; j++){
                if(M[i][j] == 0){
                    M[i][j] == 0;
                }
                else{
                    M[i][j] = M[i][j] + M[i-1][j];
                }                
            }
            area = max(area,Marea(M[i],m));
        }
        
        
        return area;
        
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends