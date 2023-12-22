#include<iostream>
using namespace std;

bool isPossible( int diff[], long long int n, long long int k, long long int mid){
    long long int wood=0;
    for (int i = 0; i < n; i++)
    {
        if(diff[i]>mid){
            wood+=diff[i]-mid;
        }
        
    }
    
        if (wood<k)
        {
            return false;
        }
        else{
            return true;
        }
}

int EKO(int diff[],long long int n, long long int k){
    long long int max=diff[0];
    for (int i = 0; i < n; i++)
    {
        if (diff[i]>max)        
        {
            max=diff[i];
        }
        
    }
    
    long long int s=0,e=max,mid=s+(e-s)/2,ans=-1;
    while(s<=e){
        if(isPossible(diff,n,k,mid)){
            ans=mid;
            s=mid+1; 
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    long long int n,m;
    cin>>n;
    int trees[n];
    cin>>m;

    for (int i = 0; i < n; i++)
    {
        cin>>trees[i];
        
    }

   cout<<EKO(trees, n, m);
    
    



    return 0;
}