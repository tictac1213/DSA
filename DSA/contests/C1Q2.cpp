#include <bits/stdc++.h> 
#include<vector>
using namespace std;
bool isPossible(int n,vector<int> arr,int mid){
    int i=0,j=0,sum1=0,sum2=0;
    for(; i<n && sum1+arr.at(i)<=mid; i++){
        sum1+=arr.at(i);
    }

    for( ; (j>=i) && (sum2+arr.at(j)<=mid); j--){
        sum2+=arr.at(j);
        
    }
    if(sum1==mid && sum2==mid){
        return true;
    }
    return false;
}

long long threeWaySplit(int n, vector<int> arr){
    int sum=0;
    for(int i=0; i<n ; i++){
        sum+=arr.at(i);
    }
    int s=0,e=n/2,mid=s+(e-s)/2,ans=0;
    while(s<=e){
        if(isPossible(n,arr,mid)){
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