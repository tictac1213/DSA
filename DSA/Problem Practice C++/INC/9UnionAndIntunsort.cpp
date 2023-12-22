#include<bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
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
void inarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int n,m,arru1[100],arru2[100],arr1[100],arr2[100],count1[100]={0},count2[100]={0},l=0,k=0;
    cin>>n;
    cin>>m;
    cout<<"Enter "<<n <<" elements for 1st array ";
    inarr(arru1,n);
    sort(arru1,n);
    arr1[0]=arru1[0];
    count1[0]++;
    for (int i = 1,j=1; j < n; i++,j++)
    {
        arr1[i]=arru1[j];
        if(arr1[i]==arr1[i-1]){
            count1[l]++;
            i--;
        }
        else{
            l++;
            count1[l]++;
        }
    }
    l++;
    cout<<"Enter "<<m <<" elements for 2nd array ";
    inarr(arru2,m);
    sort(arru2,m);
    arr2[0]=arru2[0];
    count2[0]++;
    for (int i = 1,j=1; j < m ; i++,j++)
    {
        arr2[i]=arru2[j];
        if(arr2[i]==arr2[i-1]){
             count2[k]++;
            i--; 
        }
        else{
            k++;
            count2[k]++;
        }
    }
        
    k++;
    cout<<"\nIntersection is ";
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if(arr1[i]==arr2[j]){
                for (int p = 0; p < ((count1[i]<=count2[j])?(count1[i]):(count2[j])); p++)
                {
                    cout<<arr1[i]<<" ";

                }
                
            }
        }
        
    }
        cout<<"\nUnion is ";
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if(arr1[i]==arr2[j]){
                for (int p = 0; p < ((count1[i]>=count2[j])?(count1[i]):(count2[j])); p++)
                {
                    cout<<arr1[i]<<" ";

                }
                
            }
        }
        
    }
   
    return 0;
}