// Comparator function

#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    // jo chahiye vo return kr do
    return a>b;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    //stl allows us to modify should i swap condition
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    



    return 0;
}