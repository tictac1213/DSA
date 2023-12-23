// Static keyword belongs to class
// we dont need an object to access it 
// also they dont have this keyword 

#include<iostream>
using namespace std;

class Hero{

    public:
    static int timeToComplete;
};


// initializing it
int Hero ::timeToComplete = 5; 


int main(){

    cout << Hero :: timeToComplete <<endl;

    // we can access it from class but its not recommended
    Hero a, b;
    cout << a.timeToComplete << endl;
    b.timeToComplete=10;
    cout << a.timeToComplete << endl; 

return 0;
}