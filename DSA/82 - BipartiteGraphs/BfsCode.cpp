#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        // bfs
        int n = graph.size();
        vector<int> color(n,-1);
        for(int j = 0; j < n; j++){
                if(color[j] > -1)
                    continue;
                color[j] = 0;
                queue<int> q;
                q.push(j);
                while(!q.empty()){
                    int p = q.front();
                    int c = color[p];
                    q.pop();
                    for(auto i : graph[p]){
                        if(color[i] != -1){
                            if(color[i] == c){
                                return false;
                            }
                        }
                        else{
                            color[i] = !c;
                            q.push(i);
                        }
                    }
                }
            
        }
        return true;
    }
};

int main(){
    
//	Solution s;
//	cout<< s. ;
    return 0;
}