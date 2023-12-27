
#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

int main() {
    // Without using namespace directive
    std::cout << Math::add(5, 3) << std::endl;
    std::cout << Math::subtract(8, 2) << std::endl;

    // With using namespace directive
    using namespace Math;
    std::cout << add(5, 3) << std::endl;  // No need to mention Math::
    std::cout << subtract(8, 2) << std::endl;  // No need to mention Math::

    return 0;
}
