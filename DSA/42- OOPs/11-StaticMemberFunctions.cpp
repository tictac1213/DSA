// it can only access static data members if we try to access other it give error
#include <iostream>

class MyClass {
public:
    static void staticFunction() {
        std::cout << "Static function called." << std::endl;
    }
};

int main() {
    MyClass::staticFunction(); // Static function called.
    return 0;
}
