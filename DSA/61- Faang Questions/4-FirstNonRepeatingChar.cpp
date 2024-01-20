//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    string output ="";
		    vector<int> c(26,0);
		    queue<char> j ;
		    int n = A.size();
		    for(int i = 0; i < n; i++){
		       j.push(A[i]);
		       c[A[i] -'a']++;
		       while(j.size() > 0 && c[j.front() - 'a'] > 1){
		           j.pop();
		       }
		       
		       if(j.size() == 0){
		           output+='#';
		       }
		       else{
		           output+=j.front();
		       }
		        
		        
		    }
		    
		    return output;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends