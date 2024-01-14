// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

#include<bits/stdc++.h>
using namespace std;

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    
    bool knows(int i, int j, vector<vector<int> >& M ){
        return M[i][j];
    }
    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack <int> allInParty;
        for(int i =0; i < n; i++){
            allInParty.push(i);
        }
        
        while( allInParty.size() >= 2 ){
            int i = allInParty.top();
            allInParty.pop();
            int j = allInParty.top();
            allInParty.pop();
            if( knows(i,j,M) && !knows(j,i,M)){
                allInParty.push(j);
            }
            else if(knows(j,i,M) && !knows(i,j,M)){
                allInParty.push(i);
            }
            
        }
        if(allInParty.empty()){
            return -1;
        }
        int potentialCandidate = allInParty.top();
        
        // checking row
        for(int i = 0; i < n; i++){
            if(M[potentialCandidate][i]){
                return -1;
            }
        }
        
        for(int i = 0; i < n; i++){
            if(M[i][potentialCandidate] == 0 && potentialCandidate != i){
                return -1;
            }
        }
        
        return potentialCandidate;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends

int main(){
    


return 0;
}