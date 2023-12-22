// Making pairs and vectors


#include<bits/stdc++.h>

using namespace std;
// jab bhi locally array ya vector banate hai tab 10^5 elmt can be entered but when globally 10^7
// jab vector ko direct pass kiya jaye toh vo copy hota hai and vo ek expensive process hai so pass by reference
// void printVec(vector<int> v)
void printVec(vector<int> &v){
    
    cout << "\nsize: " <<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i] << " ";
        // v.size() O(1)

    }
    cout<<endl;
}
int main()
{
    // pair<int,string> p;
    // // p = make_pair(2,"abc");
    // p={2,"abc"};
    // cout<<p.first<<" "<<p.second<<endl;
    // pair<int,string> &p1 = p, p2= p; 
    // p1.first = 3;
    // // p1 is used by reference
    // cout<<p.first<<" "<<p.second<<endl;
    // p2.first = 5;
    // // p2 is just copied
    // cout<<p.first<<" "<<p.second<<endl;
    // cin>> p.first;
    // array oy pair
    // pair<int,int> p[5];


    //  vector is a dymanic array (size not fixed)
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);  // O(1)
        printVec(v);
    }
 
    //just making a vector of 10 size 
    vector <int> vi(10);
    // size 10 all elmts initialized 3
    vector <int> vi3(10,3);
    // To remove laast elmt
    v.pop_back();// o(1)
    // ve cant copy array it just save pointers
    // but we can copy vectors
    return 0;
}