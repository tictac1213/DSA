#include<iostream>
using namespace std;
int findPower(int a, int b){
    if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    int result = 1;
    if(b%2)
        result = a;

    result = result * findPower(a,b/2)*findPower(a,b/2);

    return result;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << findPower(a,b);


return 0;
}