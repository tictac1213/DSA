#include<bits/stdc++.h>
using namespace std;
bool bSearch(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2,ans=-1; /* To avoid int range*/
    while (s<=e)
    {
        
        if (arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            return true;
        }
        mid=s+(e-s)/2;
    }

    return false;
    
    
}

int BeautifulTriplets(int arr[], int n , int d){
    int count=0;
    for (int i = 0; i < n-2; i++)
    {
     if(bSearch(arr,n,arr[i]+d)){
        if(bSearch(arr,n,arr[i]+d+d)){
            count++;
            
        }
     }   
    }
    return count;
}


int main()
{
    int n, d;
    cin>>n;
    cin>>d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<BeautifulTriplets(arr,n,d);


    return 0;
}