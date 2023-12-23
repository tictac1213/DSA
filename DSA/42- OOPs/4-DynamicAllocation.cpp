#include<iostream>
using namespace std;

class Hero {

    int health;
    char level;
    int rage;

    public :

    int getHealth(){

        return health;
    }

    char getLevel(){

        return level;
    }
    
    void setLevel(char l){
        level = l;
    
    }

    void setHealth(int l){
        health = l;
    }

};

int main(){
    Hero *Ramesh = new Hero;
    //  Ramesh.health = 70;
    (*Ramesh).setHealth(90);
    cout<< (*Ramesh).getHealth(); 
    cout << endl << sizeof((*Ramesh));
    cout << endl << sizeof(*Ramesh);

    // pointer 8 byte
    cout << endl << sizeof(Ramesh);

    delete Ramesh;
return 0;
}