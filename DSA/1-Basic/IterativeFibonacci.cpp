#include<iostream>
using namespace std;

int main(){
    int n;
    // cin >> n;
    for( n = 1 ; n < 8; n++)
    {

    int f1 = 0;
    int f2 = 1,fib;
    if( n == 2 || n == 1 ){
            cout << n-1 << " ";
    }
    else{
        for (int i = 1; i < n - 1; i++)
        {
            fib = f1 + f2;
            f1 = f2;
            f2 = fib;
        }
        cout << fib << " ";
    } 
    } 

return 0;
}