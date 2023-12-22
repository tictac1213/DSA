//  Iterators

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v= {2,3,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    // declaration of iterator
    // .end points to the next location after last element
    // vector<int> :: iterator it = v.begin();
    // cout << (*(it+1)) << endl;
    // theres a differencce between it++ and i+1
    // it++ /++it will move next iterator(to location of next data) but i+1 will just move to next memory block in memory
    vector <pair<int,int>> v_p = {{1,2},{3,4}};
    vector <pair<int,int>> :: iterator it;
for (  it = v_p.begin(); it < v_p.end(); it++)
    {
        cout<< (*it).first<<" "<<(*it).second<<endl;
        // can also be written as
        cout<< it -> first<<" "<<it -> second<<endl;

    }
    
    

    return 0;
}