#include <iostream>

class MyClass {
public:
    // Constructor with an initialization list
    MyClass(int a, double b, char c) : intValue(a), doubleValue(b), charValue(c) {
        // Constructor body (if needed)
    }

    // Member function to display values
    void displayValues() {
        std::cout << "intValue: " << intValue << ", doubleValue: " << doubleValue << ", charValue: " << charValue << std::endl;
    }

private:
    int intValue;
    double doubleValue;
    char charValue;
};

int main() {
    // Creating an object of MyClass and initializing members using the constructor
    MyClass obj(42, 3.14, 'A');

    // Displaying the initialized values
    obj.displayValues();

    return 0;
}
