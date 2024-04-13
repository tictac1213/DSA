#include<bits/stdc++.h>

using namespace std;



void traverse(vector<vector<int>> &roads, vector<bool> &visited, int curr, int n){
    visited[curr] = true;
    for(int i = 0; i < n; i++){
        if(roads[curr][i] && !visited[i]){
            traverse(roads,visited,i,n);
        }
    }
}

int findNumOfProvinces(vector<vector<int>>& roads, int n) {
   int provinces = 0;
   vector<bool> visited(n,0);
   for(int i = 0; i < n ; i++){
       if(!visited[i]){
           provinces++;
           traverse(roads,visited,i,n);
       }
   }
   return provinces;
}

int main(){
    
    // Solution s;
    // cout<< s. ;
    return 0;
}