// Agar ek bhi contructor apan bana te he toh saare compiler made nhi kaam krte

//  If you declare any constructor in a class, the compiler doesn't automatically generate the default 

#include <iostream>
#include <string>

using namespace std;

class Hero {
private:
    string name;
    int health;

public:
    // Default Constructor
    Hero() {
        cout << "This is the default constructor." << endl;
        // name = "Default Hero";
        // health = 100;
    }

    // Parameterized Constructor
    Hero(const string& heroName, int heroHealth) {
        cout << "This is the parameterized constructor." << endl;
        name = heroName;
        health = heroHealth;
    }

    // Copy Constructor
    // if we dont pass by reference in copy const it gives error as for pass by value it will need to copy for which copy constructor is needed
    Hero(const Hero& otherHero) {
        cout << "This is the copy constructor." << endl;
        name = otherHero.name;
        health = otherHero.health;
    }

    // Destructor
    ~Hero() {
        cout << "Destructor called for hero: " << name << endl;
    }

    // Member Function to Print Hero Details
    void printDetails() const {
        cout << "Hero Name: " << name << ", Health: " << health << endl;
    }
};

int main() {
    // Using Default Constructor
    Hero defaultHero;
    defaultHero.printDetails();
    cout<< endl;
    
    // Dynamic allocation no difference
    Hero *b = new Hero;
    defaultHero.printDetails();
    cout<< endl;
    delete b;

    // Using Parameterized Constructor
    Hero customHero("Custom Hero", 150);
    customHero.printDetails();
    cout<< endl;

    // Using Copy Constructor
    // Hero copiedHero(customHero); Or
    Hero copiedHero = customHero; // Copy assignment constructor
    copiedHero.printDetails();
    cout<< endl;

    return 0;
}
