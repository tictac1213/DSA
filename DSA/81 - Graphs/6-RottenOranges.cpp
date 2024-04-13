// we should not alter given data
#include<bits/stdc++.h>

using namespace std;

#include<queue>
#include<vector>
void check(int n, int m, int i, int j, queue<pair<int,int>> &q, vector<vector<bool>> &visited, vector<vector<int>>& grid ){
    if(i >= n || i < 0 || j >= m || j < 0 || visited[i][j] == true || grid[i][j] != 1 ){
        // visited[i][j] = true;
        return;
    }
    visited[i][j] = true;

    grid[i][j] = 2;
    q.push({i,j});
    // cout << i << " " << j << endl;
}

int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    int time = 0, count = 0;
    // vector<vector<int>> rott(n,vector<int>(m,0));
    vector<vector<bool>> visited(n,vector<bool>(m,0));
    int ans = -1;
    queue<pair<int,int>> q;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 2){
                q.push({i,j});
                visited[i][j] = true;
            }
        }
    }
    // vector<int> x = {0,1,-1}, y = {0,1,-1};
    pair<int,int> level = {-1,-1};
    q.push(level);
    while(q.size() > 0){
        pair<int,int> t = q.front();
        q.pop();
        if(t == level){
            // cout << "hi";
            if(q.size() > 0){
                q.push(level);
            time++;
            }
        }
        else{
            int row = t.first, col = t.second;
            // cout << row << " " << col << endl;
            check(n,m,row,col+1,q,visited,grid);
            check(n,m,row+1,col,q,visited,grid);
            check(n,m,row,col-1,q,visited,grid);
            check(n,m,row-1,col,q,visited,grid);
            // cout << q.size() <<  endl;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 1){
                return ans;
            }
        }
    }
    return time;
}

int main(){
    
    return 0;
}