  #include<iostream>
  using namespace std;
  
    bool BinarySearch(int arr[],int n, int k){
        
        if(n <= 0){
            return false;
        }

        int s = 0, e = n - 1;
        int mid = s + (e-s)/2;

        if (arr[mid] == k)
        {
            return true;
        }
        else if (arr[mid] > k)
        {
            return BinarySearch(arr,mid,k);
        }
        else{
            return BinarySearch(arr+mid+1,n-mid,k);
        }
        
        


    }

  
  int main(){
    
  int t;
    cin >> t;
    while(t--){
        int n,k;
    cin >> n;
    int arr[n];
     for (int i = 0; i < n ; i++)
     {
        cin >> arr[i];
     }
     cin >> k;
    if (BinarySearch(arr,n,k))
    {
        cout << "Yes\n";
    }
    else{
        cout << "No\n"; 
    }
    }
  
  return 0;
  }