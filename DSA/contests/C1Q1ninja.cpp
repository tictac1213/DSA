#include<bits/stdc++.h>
using namespace std;
 void sortarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
            }           
        }       
    }    
}
int main()
{
    int t;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
            int n,m;
    cin>>n>>m;
    int arr[n],prize=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sortarr(arr,n);
    for (int i = 0; i < n; i++)
    {
        if ((i+1)%m != 0)
        {
            prize+=arr[i];
            
        }
        
    }
  
    cout<<prize;
    }
    



    return 0;
}