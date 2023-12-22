#include<bits/stdc++.h>
using namespace std;
int numsqrt(int n){
    int s=0,e=n-1;
    long long int mid = (s+e)/2;
    while (s<=e)
    {
        long long int square= mid*mid;
        if(square>n){
            e=mid-1;
        }
        else if(square<n){
            s=mid+1;
        }
        else{
            return mid;
        }
         mid = (s+e)/2;
    }
    return mid;

}
int main()
{
    
    cout<<numsqrt(27);



    return 0;
}