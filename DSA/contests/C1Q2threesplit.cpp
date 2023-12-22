#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n, int mid){
    
}

int threeSplit(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int s=0,e=sum/2,mid=s+(e-s)/2,ans=-1;
    while (s<=e)
    {
        if(isPossible(arr,n,mid)){
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
    int t;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
   
        cout<<threeSplit(arr,n);
    }
    


    return 0;
}