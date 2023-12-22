// Allocate books in a way such that maximum no of pages alloted to students is min if :
// Each student gets at least one book.
// Each book should be allocated to a student.
// Book allocation should be in a contiguous manner.


#include<bits/stdc++.h>

using namespace std;
bool IsPossible(int pages[],int n, int m,int mid);
int AllocateBook(int pages[],int n,int m){
    int ans =-1,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=pages[i];
    }
    int e=sum,s=0,mid=s+(e-s)/2;
    while (s<=e)
    {
        if(IsPossible(pages,n,m,mid)){
            e=mid-1;
            ans=mid;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    
    return ans;


}
bool IsPossible(int pages[],int n, int m,int mid){
    int s=0,check,i;
    for(i=0; s < mid ; i++){
        s += pages[i];
    }
    check=AllocateBook(pages+i,n-i,m-1);
    if(check<mid){
        return true;
    }
    else{
        return false;
    }
}
void sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = i; j < n; j++)
       {
         if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
        }
       }
       
    }
    // cout<<"sorted\n ";
}    

    

int main()
{   int n,m;
    cin>>n;
    cin>>m;
    int pages[n];
    for (int i = 0; i < n; i++)
    {
        cin>>pages[i];
    }
    sort(pages,n);
    cout<<AllocateBook(pages,n,m);
    return 0;
}