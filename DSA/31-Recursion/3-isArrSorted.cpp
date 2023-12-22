#include<iostream>
using namespace std;

bool isArrSorted(int arr[], int n){
    if(n==0 || n == 1){return true;}
    if(arr[0] <= arr [1] ){
        return isArrSorted(arr+1,n-1);
    }
    
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    int arr[n];
     for (int i = 0; i < n ; i++)
     {
        cin >> arr[i];
     }
     
    if (isArrSorted(arr,n))
    {
        cout << "Yes\n";
    }
    else{
        cout << "No\n"; 
    }
    }
    
     


return 0;
}