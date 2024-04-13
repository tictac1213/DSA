// Adjacency list > matrix when sparse matrrix

#include<bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>
bool bfs(int l, vector<int> adj[], vector<bool> &visited, int n){
    visited[l] = true;
    queue<int> q;
    // cout << l << " ";
    q.push(l);
    map<int,int> parent;
    parent[l] = -1;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        for(int i = 0; i < adj[t].size(); i++){
            
                if(visited[adj[t][i]] == true && parent[t] != adj[t][i]){
                    return true;
                }
                else if(visited[adj[t][i]] != true ){
                    visited[adj[t][i]] = true;
                    parent[adj[t][i]] = t;
                    q.push(adj[t][i]);
                }
            
        }
    }
    return false;
}


string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    vector<int> adj[n];
    vector<bool> visited(n,false);
    for(int i = 0; i < m; i++){
        int f = edges[i][0] -1, l = edges[i][1]-1;
        adj[f].push_back(l);
        adj[l].push_back(f);
        // adj[l][f] = 1;
    }
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            if(bfs(i,adj,visited,n)){
                return "Yes";
            }
        }
    }

    return "No";
}


int main(){
    
    
    return 0;
}