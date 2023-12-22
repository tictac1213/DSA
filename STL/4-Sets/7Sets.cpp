// implementation of sets


#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
for(string value : s){
        cout<<value<<" ";
    }
    cout<<endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout<< *it<<" ";
    }
    
}

int main()
{
    set<string> s;
    // set store data in oredered way red black trees
    s.insert("abc"); // log(n)
    s.insert("zsdf");
    s.insert("bcd");
    // print(s);
    // auto it = s.find("abc");
    // if (it != s.end())
    // {
    //     s.erase(it); 
    // }
    // print(s);
    auto e = s.end()--;
    cout<< s[e];
    //  Unordered sets - hash tables
    unordered_set <string> us; //O(1) avg
    //  multi set
    multiset <string> ms; // O (logn)
    // duplicates allowed stored in  ordered way
    //  find returnd iterator corresponding to first appearance
    // in multiset if we use erase using iterator it onty delete the corresponding valuebut when we use erase by value it deletes all occurence
    // erase me jab iterator toh o(1) aur alue o(logn)
    return 0;
}