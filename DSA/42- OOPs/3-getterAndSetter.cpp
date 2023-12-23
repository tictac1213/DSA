#include<iostream>
using namespace std;

class Hero {

    int health;
    char level;

    public :

    int getHealth(){

        return health;
    }

    int getLevel(){

        return health;
    }
    
    void setLevel(char l){
        level = l;
    
    }
    void setHealth(int l){
        health = l;
    }

};

int main(){
    Hero Ramesh;
    // Ramesh.health = 70;
    Ramesh.setHealth(90);
    cout<< Ramesh.getHealth(); 
    cout << endl << sizeof(Ramesh);

return 0;
}