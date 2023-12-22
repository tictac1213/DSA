// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    
    void solve(vector<vector<int>> m, int n, vector<string> &ans, string output, int i ,int j ){
        
        // cout << i << " " << j << " " <<  output << endl;
        if( i == n-1 && j == n-1 && m[i][j] != 0){
            
            ans.push_back(output);
            return;
        } 
        if(i < 0 || j < 0 ){
            return;
        }
        
        if( i >= n || j >= n ){
            return;
        } 
        
        if( m[i][j] == 0 ){
            return;
        } 
        
        
        m[i][j] = 0;
        
        int last = output.size();
        output+='U';
        solve(m,n,ans,output,i-1,j);
        
        output[last] = 'R';
        solve(m,n,ans,output,i,j+1);
        
        output[last] = 'L';
        solve(m,n,ans,output,i,j-1);
        
        output[last] = 'D';
        solve(m,n,ans,output,i+1,j);
        
        
        
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<string> ans;
        
        string output = "";
        
        solve(m,n,ans,output,0,0);
        
        if(ans.size())
            return ans;
        
        ans.push_back("-1");
        return ans;
        
    }
};


int main(){
    
    Solution s;
    
    return 0;
}