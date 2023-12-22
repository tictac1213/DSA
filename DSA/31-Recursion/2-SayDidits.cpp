#include<iostream>
using namespace std;

void SayDigits(int n){
    if(n==0){
        return;
    }
    string s[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int k = n % 10;    
    SayDigits(n/10);
    cout << s[k] << " "; 


}


int main(){
    int n;
    cin >> n;

    SayDigits(n);


return 0;
}