#include<iostream>
using namespace std;
void sortarr(int arr[],long long int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
        
    }
    
}

bool isPossible( int diff[], long long int n, long long int k, long long int mid){
    int dishCount=0,time=mid;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; time-diff[i]*j>=0; j++)
        {
            time-=diff[i]*j;
            dishCount++;
            
        }
        time=mid;
    }
    if (dishCount<k)
    {
            return false;
    }
            return true;
    
        
}

int EKO(int diff[],long long int n, long long int k){
    
    long long int s=0,e=k*10,mid=s+(e-s)/2,ans=-1;
    while(s<=e){
        if(isPossible(diff,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1; 
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    long long int n,m;
    cin>>n;
    int cook[n];
    cin>>m;

    for (int i = 0; i < n; i++)
    {
        cin>>cook[i];
        
    }
    sortarr(cook,n);
    cout<<EKO(cook, n, m);
    
    



    return 0;
}