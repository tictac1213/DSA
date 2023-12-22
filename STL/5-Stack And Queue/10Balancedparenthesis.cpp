#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin >> t;
    while (t-- > 0)
    {   
        int flag=1;
        string s;
        cin >> s;
        stack <char> p;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || '{' || '['){
                p.push(s[i]);
            }
            else if((s[i] == ')' && p.top() == '(')||(s[i] == '}' && p.top() == '{')||(s[i] == ']' && p.top() == '[')) {
                p.pop();
            }
            else{
                flag==0;
            }
        }
        if ((!p.empty()) && flag)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
        
        
    }
    




    return 0;
}