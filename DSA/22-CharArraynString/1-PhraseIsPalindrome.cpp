// A phraseis a palindrome after convertiong all to lowercase and removing all non alpha numeric characters
#include<iostream>
// #include<string>
using namespace std;

bool checkPalindrome(const string &s){
    int size = s.size();
    for (int i = 0; i < size/2; i++)
    {
        if (s[i] != s[size - i -1])
        {
           return false;
        }
        
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);
    string AlphaNumS;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 95 && s[i] <= 122) )
        {
          AlphaNumS.push_back(s[i]); 
        }
        else if(s[i] >= 65 && s[i] <= 90 ){
            AlphaNumS.push_back(s[i]-'A'+'a');
        }

    }
    
    cout << checkPalindrome(AlphaNumS);


return 0;
}

