#include<iostream>
using namespace std;

int main()
{
    // lamda functions
    auto sum = [](int x,int y){return x+y;};
    cout << sum(2,3);



    return 0;
}