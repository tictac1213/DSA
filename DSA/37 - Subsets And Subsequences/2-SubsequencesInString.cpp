#include<bits/stdc++.h>
using namespace std;

void elementSelector(string s, vector<string> &ans,string output, int index){
    if(index >= s.size()){

        // we dont need empty string
        if(output.size())
        ans.push_back(output);
        return;
    }

    elementSelector(s,ans,output,index+1);
    output += s[index];
    elementSelector(s,ans,output,index+1);

}

vector<string> subSequence(string s){
    vector<string> ans;
    string output ="";

    elementSelector(s,ans,output,0);
    return ans; 
}

int main(){
    string s ="abc";
    
    vector<string> ans = subSequence(s);


return 0;
}