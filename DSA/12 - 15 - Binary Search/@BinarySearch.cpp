#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int opt=0;
        for (int j = i; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                opt=1;
            }
            
        }
        if (opt==0)
        {
            break;
        }
        
    }
    
}
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int bSearch(int arr[],int n,int key){
    int s=0,e=n-1;
     int mid=s+(e-s)/2; /* To avoid int range*/
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
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return -1;
    
}
int main(){
    int arr[6]={6,5,3,8,34,2},key=3;
    sort(arr,6);
    cout<<endl;
    printarr(arr,6);
    int index=bSearch(arr,6,34);
    cout<<"\n"<<index;
    return 0;
}