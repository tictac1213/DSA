
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector <string> alpha = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(string s,vector<string> &ans,string output,int index  ){
        if(index >= s.size() ){
            if(output.size())
            ans.push_back(output);
            return;
        }

        int k = s[index]-'0';

        output += " ";
        int last= output.size()-1;
        for(int i = 0; i < alpha[k].size(); i++){
            output[last] = alpha[k][i];
            solve(s,ans,output,index+1);
        }
    }


    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output = "";
        solve(digits, ans, output,0);
      
        return ans;
    }
};

int main(){
    
    Solution s;
    
    return 0;
}