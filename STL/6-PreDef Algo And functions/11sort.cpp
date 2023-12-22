// Inbuilt sort

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
    sort(a,a+n);// uses introsort its mix of quick, heap ,insertion sort
    //  sort in non decreasing order
    // O(nlogn)
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    



    return 0;
}