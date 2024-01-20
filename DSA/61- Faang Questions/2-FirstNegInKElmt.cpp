// Its not optimal approach we want to use queue thats why this approach

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                    
        vector<long long> ans;
        queue< long long> dict;
        for(int i = 0; i < K; i++){
            dict.push(A[i]);
        }
        
        for( int i = K; i < N; i++){
            while(dict.size() > 0 && dict.front() >= 0 ){
                dict.pop();
            }
            
            if( dict.size() == 0){
                ans.push_back(0);
            }
            else{
                ans.push_back(dict.front());
            }
            if(dict.size() >= K)
            dict.pop();
            
            dict.push(A[i]);
            
        }
        while(dict.size() > 0 && dict.front() >= 0 ){
                dict.pop();
            }
            
            if( dict.size() == 0){
                ans.push_back(0);
            }
            else{
                ans.push_back(dict.front());
            }
        
            return ans;
                                                 
 }