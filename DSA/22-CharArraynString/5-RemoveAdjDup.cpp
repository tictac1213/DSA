#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
      string ans="";
      int i=0;
      
      while(i<s.length())
      {
          if(ans.length() > 0 && ans[ans.length()-1] == s[i])
          {
              ans.pop_back();
          }
          else{
              ans.push_back(s[i]);
          }
          i++;
      }
      return ans;
    }
};

int main(){
    string s="aaaaaaab";
    Solution s1;
    cout << s1.removeDuplicates(s);
    cout<< s[s.size()-1];


return 0;
}