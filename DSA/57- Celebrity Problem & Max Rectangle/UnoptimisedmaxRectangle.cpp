// unoptimized approach


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

vector<int> nextSmallerIndex(vector<int> arr, int m){
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

vector<int> prevSmallerIndex(vector<int> arr, int m){
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




int Marea(vector<int> arr, int m){
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
        int prev = 0;
        vector<vector<int>> collect(n,vector<int>(m));

        for(int i = 0; i < m ; i++){
            for(int j =0; j < n ; j++){
                
                collect[j][i] = prev + M[j][i];
                if(M[j][i] == 0){
                    prev = 0;
                    collect[j][i] = 0;
                }
                else{
                    prev++;
                }
                
            }
            prev = 0;
        }
        int area = 0;
        for(int i = 0; i < n ; i++){
            area = max(area,Marea(collect[i],m));
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