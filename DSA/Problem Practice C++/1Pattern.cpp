#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            if (j < n-i)
            {
                cout<<j+1<<" ";

            }
            else if(j >= n+i ){
                cout<<2*n-j<<" ";

            }
            else{
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }
    



    return 0;
}