#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1){
            return 1;
        }

        return climbStairs(n-1) + climbStairs(n-2) ;

    }
};

int main(){
    int n = 14;
    Solution s;
    for (int i = 0; i < n; i++)
    {
        cout<< s.climbStairs(i) <<endl;
        
    }
    
    return 0;
}