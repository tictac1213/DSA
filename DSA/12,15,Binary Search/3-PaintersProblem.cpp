// N boards m painters min no of time in painting if each painter paint consecutive

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int board[],int n,int m,int mid){
    int sum = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
        
        if (sum+board[i] <= mid)
        {
           sum+=board[i]; 
        }
        else{
            count++;
            if(board[i] > mid || count > m ){
                return false;
            }
            sum=board[i];
        }
        
    }

  
    return true;
    
}

int PaintersProblem(int board[],int n,int m){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=board[i];
    }
    int start = 0, end = sum, mid = start + (end-start)/2, ans = 0;

    while (start <= end)
    {
        if (isPossible(board,n,m,mid))
        {
            end = mid -1;
            ans = mid;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }

    return ans;
}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int board[n];
    for (int i = 0; i < n; i++)
    {
        cin>>board[i];
    }

    cout<<"Minimum time taken is "<<PaintersProblem(board,n,m);
    


    return 0;
}