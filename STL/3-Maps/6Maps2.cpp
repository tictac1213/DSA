// Implementation of maps and multimaps

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int ,string> m;
    m[1]="abc"; //O(1) is avg time compexity
    m[5]="cdc";
    m[3]="acd";
    m[6]="abc";
    m[5]="cde";
    for (auto &pr : m)
    {
        cout<<pr.first <<" "<<pr.second<<endl;
        // Printed in a random order
        // umaps use hash tables to store data
    }
    // in maps we cant use all datatypes for eg theres no hash function for sets pairs vectors etc so cant be used in um
    // multimaps re black trees
    // in maps keys are uniqe i.e if we declare m[6] twice it just overwrite but in mm itsinserted twice
    multimap < int,int> m;




    return 0;
}