#include<iostream>
using namespace std;

// macro - a piece of code is replaced byvalue of macro
#define REP(n,k) for( int i = n; i < k; i++) 

// Object like Macro definition
#define DATE 31
#define  PI  3.1416

// Chain Macro definition
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define  AREA(r)  (PI*(r)*(r))



int main(){
    int arr[]={ ELE };
    REP(0,3){
        cout<< arr[i] << " " ;
    }


return 0;
}