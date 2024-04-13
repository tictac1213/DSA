#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    void bfs(int n, int m, vector<vector<int>>& image, int i, int j, int c, int f){
        if( c == f){
            return;
        }
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            pair<int,int> t = q.front();
            int row = t.first, col = t.second;
            image[row][col] = f;
            q.pop();
            int coln = col, rown = row;
            coln++;
            if( rown >= 0 && rown < n && coln < m && coln >= 0 && image[rown][coln] == c){
                        q.push({rown, coln});
            }
            coln--;
            coln--;
            if( rown >= 0 && rown < n && coln < m && coln >= 0 && image[rown][coln] == c){
                        q.push({rown, coln});
            }
            coln++;
            if( rown >= 0 && rown < n && coln < m && coln >= 0 && image[rown][coln] == c){
                        q.push({rown, coln});
            }
            rown++;
            if( rown >= 0 && rown < n && coln < m && coln >= 0 && image[rown][coln] == c){
                        q.push({rown, coln});
            }
            rown--;
            rown--;
            if( rown >= 0 && rown < n && coln < m && coln >= 0 && image[rown][coln] == c){
                        q.push({rown, coln});
            }
            }
        
    }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(), m = image[0].size();
        bfs(n,m,image,sr,sc,image[sr][sc],color);

        return image;
    }
};

int main(){
    
    Solution s;
    return 0;
}