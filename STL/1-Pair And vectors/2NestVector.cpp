// Nesting in pairs and vectors

#include<bits/stdc++.h>
using namespace std;
void printVecPair(vector<pair<int,int>> &p){
    for (int i = 0; i < p.size(); i++)
    {
    // cout << "size: " <<v.size()<<endl;
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    
}
void printVec(vector<int> &p){
    for (int i = 0; i < p.size(); i++)
    {
    // cout << "size: " <<v.size()<<endl;
        cout<<p[i]<<" ";
    }
    
}


int main()
{
    // vector of pairs
    // vector <pair<int,int> > v = {{1,2} , {2,3}, {3,4}};
    // printVec(v);
  // array of vector
        vector <int> v[5];
        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < x; j++)
            {
                int temp ;
                cin >> temp;
                v[i].push_back(temp);
            }
            
        }
        // array of vector acts like a 2d array with no of rows fixed but column dynamic
        for (int i = 0; i < 5; i++)
        {
            printVec(v[i]);
            cout<<endl;
        }
        


// Vector of vector acts like a 2d array with no of rows and column dynamic
        vector<vector<int>> vov;
         for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            vector <int> tem;
            for (int j = 0; j < x; j++)
            {
                int temp ;
                cin >> temp;
                // We can't do this as v[i] doesnt exist
                // vov[i].push_back(temp);
                tem.push_back(temp);
            }
            vov.push_back(tem);
        }
        // we can avoid usind tem by first initializing a vov.push_back(vector<int>() );
        // printing of vector of vector
         for (int i = 0; i < 5; i++)
        {
            printVec(v[i]);
            cout<<endl;
        }
    return 0;
}