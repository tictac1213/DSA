#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool solve(string s, stack<char> m, int i, int n,int k, vector<vector<int>> &visited){
        if(visited[k][m.size()] != 0){
            return visited[k][m.size()]-1;
        }
        if(i == n){
            if(m.empty()){
                return true;
            }
            else{
                return false;
            }
        }
        if(s[i] == '('){
            m.push('(');
            if(solve(s,m,i+1,n,k+1,visited)){
                visited[k][m.size()] = 2;
                return true;
            }
            else{
                visited[k][m.size()] = 1;

            return false;
            }
        }
        else if(s[i] == ')'){
            if(m.empty()){
                visited[k][m.size()] = 1;
                return false;
            }
            m.pop();
            if(solve(s,m,i+1,n,k+1,visited)){
                visited[k][m.size()+1] = 2;
                return true;
            }
            else{
                visited[k][m.size()+1] = 1;

            return false;
            }
        }
        else{

            // s[i] = '(';
            m.push('(');
            bool f1 = solve(s,m,i+1,n,k+1,visited);
            m.pop();
            bool f3 = solve(s,m,i+1,n,k+1,visited);
            // s[i] = ')';
            if(!m.empty()){
                m.pop();
                bool f2 = solve(s,m,i+1,n,k+1,visited);
                if(f1||f2||f3){
                visited[k][m.size()] = 2;
                return true;
                }
                else{
                    visited[k][m.size()] = 1;

                return false;
                }
            }
            if(f1||f3){
                visited[k][m.size()] = 2;
                return true;
                }
                else{
                    visited[k][m.size()] = 1;

                return false;
                }
           
        }
        
    }
    bool checkValidString(string s) {
        stack<char> m;
        int num = s.size(), limit = 0;
        
    vector<vector<int>> visited(120,vector<int>(120,0));
        return solve(s,m,0,num,0,visited);
    }
};

int main(){
    
	Solution s;
	cout<< s.checkValidString("(*)") ;
    return 0;
}