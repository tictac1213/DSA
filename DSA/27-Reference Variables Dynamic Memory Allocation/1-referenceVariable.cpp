// same memory space ke 2 naam the use of this is in sfunction call

#include<iostream>
using namespace std;

void update1(int n){
    n++;
}

void update2(int &n){
    n++;
}

int main(){
    int i = 5;

    // creating reference variable
    int &j = i;

    cout<< i << " ";
    i++;
    cout<< i << " ";
    j++;
    cout<< i << " ";
    cout<< j << " ";

    cout<< endl;
    int n = 5;
    cout << n << " ";
    update1(n);
    cout << "after up1 " << n << endl;
    cout << n << " ";
    update2(n);
    cout << "after up2 " << n << endl;


return 0;
}