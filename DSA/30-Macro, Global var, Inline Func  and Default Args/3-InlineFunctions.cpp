
#include <iostream>

// Declaration of an inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);  // The function call is replaced with the function body
    std::cout << "Result: " << result << std::endl;
    return 0;
}
