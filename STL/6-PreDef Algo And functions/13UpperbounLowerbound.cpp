// Upper and lower bound


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    // array should be sorted
    int *ptr = lower_bound(a,a+n,6);
    cout<<"lb "<<*ptr;
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    // int *ptr2 = lower_bound(a,a+n,6);
    int *ptr2 = upper_bound(a,a+n,6);
    // if we use lb and ub for set and pass s.begin(),s.end it work but O(n) not logn
    // we use s.lower_bound
    // maps me key par work krta hai
    cout<<"lb "<<*ptr2;
    // if it cant find it return v.end()



    return 0;
}