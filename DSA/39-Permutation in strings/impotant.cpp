// https://www.codingninjas.com/studio/problems/pemutations-of-a-string_985254?leftPanelTabValue=PROBLEM


#include<bits/stdc++.h>
using namespace std;

void solve(string s, vector<string> &ans, string output, string temp){
    if( output.size() >= s.size() ){
        if(output.size() == s.size() )
            ans.push_back(output);
        return; 
    }

    for( int i = 0; i < temp.size(); i++){
        string b = temp;
        char k = temp[i];
        b.erase(i,1);
        // cout<<b<<endl;
        solve(s, ans, output+k,b);
    }


}



vector<string> generatePermutations(string &str)
{
    sort(str.begin(),str.end());
    string temp = str, output = "";
    vector<string> ans;

    solve(str,ans,output,temp);

    return ans;
}