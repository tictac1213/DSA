#include<iostream>
using namespace std;

bool isPossible(int pages[],int n,int m,int  mid){
    int studentCount=1,pageSum=0;
    for (int i = 0; i < n; i++)
    {
        
        if (pageSum+pages[i] <= mid)
        {
            pageSum+=pages[i];
        }
        else{
            if (studentCount>m || pages[i]> mid)      
            {
                return false;
            }
            pageSum=pages[i];
            studentCount++;
        }
                                                
        
    }
        // if (studentCount != m)      
        //     {
        //         return false;
        //     }
    return true;
    
}
int AllocateBook(int pages[],int n,int m){
    int sum=0,ans=-1;
    for (int i = 0; i < n; i++)
    {
        sum+=pages[i];
    }
    int s=0,e=sum,mid=s+(e-s)/2;
    while (s<=e)
    {
        if (isPossible(pages,n,m,mid))
        {
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
int main(int argc, char const *argv[])
{
    int n,m;
    cout<<"Enter number of books ";
    cin>>n;
    cout<<"Enter no of pages in each book ";
    int pages[n];
    for (int i = 0; i < n; i++)
    {
        cin>>pages[i];
    }
    cout<<"enter number of students ";
    cin>>m;
    cout<<"Max-Minimum is "<<AllocateBook(pages,n,m);
    return 0;
}
