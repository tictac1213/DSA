// My soln
// #include<iostream>
// using namespace std;
// void sort(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 swap(arr[i],arr[j]);
//             }           
//         }       
//     }    
// }
// int main(){
//     int arr[1000],n;
//     cin>>n;
//     cout<<"Input data one by one\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//         if (arr[i]>=n)
//         {
//             cout<<"\nShould be between 0 to n \n";
//             i--;
//         }       
//     }
//     sort(arr,n);
//     for (int i = 0; i < n-1; i++)
//     {
//         if (arr[i]==arr[i+1])
//         {
//                 cout<<"\nDuplicate Element is "<<arr[i];
//                 break;
//         }       
//     }
//     return 0;
// }

//Babbar Sol
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100],ans=0;
    cin>>n;
    cout<<"Input Data ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
       
    }
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans=ans^i;
    }
    cout<<"Repeated Element is "<<ans;
    
  



    return 0;
}