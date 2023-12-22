#include<bits/stdc++.h>
using namespace std;

int main()
{   // lamda functions
    auto sumf = [](int x,int y){return x+y;};
    cout << sumf(2,3);
    int a[]={1,2,8,9,6,4};
    // it return pointer
    cout<<*min_element(a,a+6)<<" ";
    cout<<*max_element(a,a+6)<<" ";
    cout<<count(a,a+6,6)<<" ";
    cout<<*find(a,a+6,6)<<" ";
    cout<<all_of(a,a+6,[](int x){return x>0;})<<" ";
    cout<<any_of(a,a+6,[](int x){return x>0;})<<" ";
    cout<<none_of(a,a+6,[](int x){return x>0;})<<" ";
    reverse(a,a+6);
    int sum=accumulate(a,a+6,0);
    cout<<sum;




    return 0;
}