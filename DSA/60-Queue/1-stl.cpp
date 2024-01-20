// FIFO

#include<bits/stdc++.h>
using namespace std;



int main(){
    queue<int> j;
    j.push(2);
    j.push(8);
    j.push(27);
    j.pop();
    cout << j.front();
    cout << j.empty();

return 0;
}