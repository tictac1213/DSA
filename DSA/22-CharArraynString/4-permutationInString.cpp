// https://leetcode.com/problems/permutation-in-string/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void countEachLetter(string &a,int * count){
       
        for(int i = 0;i < a.size() ; i++){
            count[a[i]-'a']++;
        }
    
    }
    bool isEqual(int *a,int *b){
        for(int i=0; i<26 ; i++){
            if(a[i]!=b[i])
                return false;
            
        }
        return true;
    }

    bool checkInclusion(string &s1, string &s2) {
        int a=s1.size(),b=s2.size();
        int s1c[26]={0};
        countEachLetter(s1,s1c);
            string s = s2.substr(0,a);
            int temp[26]={0};
            countEachLetter(s,temp);
        for(int i=0; i<b-a;i++){
    
            if(isEqual(s1c,temp)){
                return true;
            }
            temp[s2[i]-'a']--;
            temp[s2[i+a]-'a']++;
        } 
        if(isEqual(s1c,temp)){
                return true;
            }
        return false;
    }
};

int main(){
    
string s1 ="ab",s2 ="eidboaoo";
Solution s;
cout<<s.checkInclusion(s1,s2);
return 0;
}
