// !{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int strt = 0;
       int deficit = 0;
       int pe = 0;
       for(int i =0; i < n; i++){
           pe += (p[i].petrol - p[i].distance);
           
           if(pe < 0){
               deficit += pe;
               strt = i+1;
               pe = 0;
           }
           
    //   cout << deficit << " " << pe << strt << endl;
          
       }
       
       if( deficit + pe >= 0 ){
           return strt;
       }
       
       return -1;
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
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends