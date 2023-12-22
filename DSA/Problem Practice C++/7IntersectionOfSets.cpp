//Sorted Arrays input
// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include<bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n,m,arr1[100],arr2[100],count1[100]={0},count2[100]={0},l=0,k=0;
    cin>>n;
    cin>>m;
    cout<<"Enter "<<n <<" elements for 1st array ";
    cin>>arr1[0];
    count1[0]++;
    for (int i = 1,j=1; j < n; i++,j++)
    {
        cin>>arr1[i];
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
    cin>>arr2[0];
    count2[0]++;
    for (int i = 1,j=1; j < m ; i++,j++)
    {
        cin>>arr2[i];
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
    // printarr(arr1,l);
    // cout<<endl;
    // printarr(count1,l);
    // cout<<endl;
    // printarr(arr2,k);
    // cout<<endl;
    // printarr(count2,k);
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
   
    return 0;
}