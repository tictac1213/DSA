#include<iostream>
using namespace std;

bool isPossible(int diff[], int n, int k, int mid){
    int cowCount=1,space=0;
    for (int i = 0; i < n; i++)
    {
        if(space>=mid){
            cowCount++;
            space=0;
        }
        else{
            
            space+=diff[i];
        }
        
    }
    
        if (cowCount<k)
        {
            return false;
        }
        else{
            return true;
        }
}

 void sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }           
        }       
    }    
}
int stopCows(int diff[],int n, int k){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=diff[i];
    }
    int s=0,e=sum,mid=s+(e-s)/2,ans=-1;
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
    int n,k;
    cin>>n;
    int stall[n],diff[n-1];
    cin>>k;

    for (int i = 0; i < n; i++)
    {
        cin>>stall[i];
        
    }
    sort(stall,n);
    for (int i = 1; i < n; i++)
    {
        
        diff[i-1]=stall[i]-stall[i-1];
    }
   cout<<"The maximum minimum distance is "<<stopCows(diff, n, k);
    
    



    return 0;
}