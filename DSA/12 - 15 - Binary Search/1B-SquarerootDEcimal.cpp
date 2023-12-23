#include<bits/stdc++.h>
using namespace std;
int sqrtInt(int n){
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

double morePrecision(int n,int precision,int tempSol){
    float factor = 1;
    float ans=tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor/=10;
        for (int i = 0; (ans+factor)*(ans+factor) <= n; i++)
        {
            ans+=factor;
        }
        
    }
    return ans;
}


int main()
{
    int num;
    cin >> num;
    cout << sqrtInt(num)<<endl;
    cout << morePrecision(num,3,sqrtInt(num))<<endl;
    cout << sqrt(num);



    return 0;
}