#include<bits/stdc++.h>

using namespace std;



vector<vector<int>> nearest(vector<vector<int>> &mat, int n, int m) {
    vector<vector<int>> ans(n, vector<int>(m, -1));
    vector<vector<int>> vis(n, vector<int>(m, 0));
    
    queue <pair<pair<int,int>,int>> q;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j]){
              q.push({{i, j}, 0});
              vis[i][j] = true;
            }
        }
    }

    vector<int> drow = {1,0,-1,0};
    vector<int> dcol = {0,1,0,-1};
    while(!q.empty()){
        pair<pair<int,int>,int> d = q.front();
        q.pop();
        int row = d.first.first;
        int col = d.first.second;
        int steps = d.second;
        ans[row][col] = steps;
        for(int i = 0; i < 4; i++){
            int nrow = row + drow[i], ncol = col + dcol[i];
            if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m)
            if(!vis[nrow][ncol]){
                q.push({{nrow,ncol},steps+1});
                vis[nrow][ncol] = true;
            }
        }
    }


    return ans;
}

int main(){
    
//	Solution s;
//	cout<< s. ;
    return 0;
}