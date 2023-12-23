
// In C++, the this keyword is a pointer that points to the current instance of the class. 

#include <iostream>

class MyClass {
private:
    int x;

public:
    void setX(int x) {
        this->x = x;  // Use 'this' to refer to the member variable
    }

    int getX() const {
        return x;
    }

    void printAddress() {
        std::cout << "Address of the current object: " << this << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.setX(42);
    std::cout << "Value of x: " << obj.getX() << std::endl;
    obj.printAddress();

    return 0;
}
