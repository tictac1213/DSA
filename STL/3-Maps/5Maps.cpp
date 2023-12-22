// Ordered Maps in stl

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Map store key values mapping
    // in normal map values are stored in order acc to keys 
    // normal maps are implemented by red black trees
    // in maps we cant add 1 in iterator
    map <int,string> m;
    m[1] = "abc";  // O(log(n)) here n=1
    m[5] = "cab";  
    // in maps if we just declere a key it will automatically be initialize by 0 or null string dependinng on datatype
    m[6]; 
    m.insert({3,"cdc"});

    for (auto &i : m)
    {
        cout<< i.first << " " << i.second<<endl;
        // both insertion and accessins O(log(n))
    }
    auto i = m.find(3); //O(log(n))
    // map.find() returns the iterator and if it doesnt find it returns iterator for m.end
    m.erase(i); //O(log(n))
    m.erase(5); //O(log(n)) in erase we can use the key or iterator
    // if we give command to erase a iterator which doesnt exist it gives segmentation fault
    m.clear(); // deletes the map
    map <string,string> a;
    a["abcd"] = "abcd"; //  s.size() * log(n) here s.size is size fo abcd i.e 4 and n is size of map 

    return 0;
}