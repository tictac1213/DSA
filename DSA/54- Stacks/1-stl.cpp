#include<iostream>
#include<stack>
using namespace std;



int main(){
    stack <int> s;
    s.push(4);
    s.push(3);

    s.pop();

    cout << s.top();

    cout << s.empty();

    cout << s.size();

return 0;
}