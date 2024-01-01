#include <bits/stdc++.h>
using namespace std;
bool isOperator(char j){
    return j == '*' || j == '-' || j == '/' || j == '+';
}


bool isValidExp(string s){
    for(int i = 0; i < s.size(); i++){
        char j = s[i];
        if(isOperator(j)){
            return true;
        }
    }
    return false;
}

bool findRedundantBrackets(string &s)
{
    stack<char> k;
    for(int i = 0; i < s.size(); i++){
        if(s[i]!= ')' ){
            char j = s[i];
            k.push(j);
        }
        else{string temp = "";

            while(k.top() != '('){
                temp = temp + k.top();
                k.pop();
            }
            k.pop();
            if(!isValidExp(temp)){
               
                return true;
            }
        }
        
    }
    return false;
}
