
// Use of range based loops and auto keyword

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v ={1,2,4,3,5};
    // rage based loops
    for (int value : v)
    {
        // this value is actually copied value from vector v i.e value++ has no effect on v
        cout<< value<<" ";
    }
    // to pass by reference
         for (int &value : v)
    {
        cout<< value<<" ";
    }
    // auto dynamically determines the datatype
    auto a = 1.5;
    cout << a;

    return 0;
}