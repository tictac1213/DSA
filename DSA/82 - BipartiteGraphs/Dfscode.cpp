#include<bits/stdc++.h>

using namespace std;



bool dfs(vector<vector<int>> &edges, vector<int> &color, int i, int c, int n ){
	if(color[i] != -1){
		if(color[i] == c){
			return false;
		}
		return true;
	}
	color[i] = !c;
	for( int j = i/2; j < n; j++ ){
		if(edges[i][j] == 1)
			if(!dfs(edges,color,j,!c,n)){
				return false;
			}
	}
	return true;

}

bool isGraphBirpatite(vector<vector<int>> &edges) {
	
	int n = edges.size();
	vector<int> color(n,-1);
	return dfs(edges,color,0,1,n);
}

int main(){
    
//	Solution s;
//	cout<< s. ;
    return 0;
}