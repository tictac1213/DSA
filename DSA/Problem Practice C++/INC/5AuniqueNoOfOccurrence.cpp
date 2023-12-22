// FAILED ATTEMPT
#include<iostream>

using namespace std;

int main()
{
    int arr[100],n,u[100][2]={},l=1;
    for (int i = 0; i < 100; i++)
    {
        u[i][1]==0;
    }
    
    cout<<"NO of inputs ";
    cin>>n;
    cout<<"Enter data ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    u[0][0]=arr[0];
    u[0][1]=1;
    for (int i =  1; i < n; i++)
    {
        int count=0;
        for (int j = 0; (j < l)  ; j++)
        {
            
            if (arr[i]==u[j][0])
            {
                u[j][1]++;
                count++;
                
            }
            
        }
            if (count==0)
            {
                u[l][0]=arr[i];
                u[l][1]=1;
                l++;
            }
            
           

        }
    int flag=0;
    
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (u[i][1]==u[j][1] && i!=j)
            {
                flag=0;
                cout<<"False";
                break;
            }
            
        }
        
      
       
    }
   
        
        
    
    
    


    



    return 0;
}