#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    while (1)
    {
        if (n%2==0 && n!=0 && n!=1)
        {
            n=n/2;
            i++;

        }
        else if(n==1){
            
                cout<<i;
            break;
        }
        else{
            cout<<"Not a power of 2";
            break;
        }
        
    }
    
    

}