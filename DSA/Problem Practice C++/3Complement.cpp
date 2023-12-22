// Not 1's but eg 5(101) will give 2(010)
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,mask=0,t;
    cin>>n;
   for (int i = 0; mask<n ; i++)
   {
     mask=mask+pow(2,i);
   }
    // cout<<mask<<endl;
    t=n^mask;
    cout<<t;
    

    return 0;
}

