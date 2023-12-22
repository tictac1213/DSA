#include <iostream>
#include <vector>

int main() {
    // int example
    int a = 5;
    int* pint = &a;

    std::cout << "int example:" << std::endl;
    std::cout << "Size of int: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Size of int pointer: " << sizeof(pint) << " bytes" << std::endl;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value at pint: " << *pint << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Value at pint after increment: " << *(++pint) << std::endl;
    std::cout << "Value at pint after decrement: " << *(--pint) << std::endl;
    std::cout << std::endl;

    // char example
    char ch = 'A';
    char* pchar = &ch;

    std::cout << "char example:" << std::endl;
    std::cout << "Size of char: " << sizeof(ch) << " bytes" << std::endl;
    std::cout << "Size of char pointer: " << sizeof(pchar) << " bytes" << std::endl;
    std::cout << "Value of ch: " << ch << std::endl;
    std::cout << "Value at pchar: " << *pchar << std::endl;
    std::cout << "Address of ch: " << static_cast<void*>(&ch) << std::endl;
    std::cout << "Value at pchar after increment: " << *(++pchar) << std::endl;
    std::cout << "Value at pchar after decrement: " << *(--pchar) << std::endl;
    std::cout << std::endl;

    // string example
    std::string str = "Hello";
    std::string* pstr = &str;

    std::cout << "string example:" << std::endl;
    std::cout << "Size of string: " << sizeof(str) << " bytes" << std::endl;
    std::cout << "Size of string pointer: " << sizeof(pstr) << " bytes" << std::endl;
    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value at pstr: " << *pstr << std::endl;
    std::cout << "Address of str: " << pstr << std::endl;
    // Note: Strings are not suitable for pointer arithmetic like increment/decrement
    // as they manage dynamic memory internally.
    std::cout << std::endl;

    // vector example
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int>* pvec = &vec;

    std::cout << "vector example:" << std::endl;
    std::cout << "Size of vector using size of: " << sizeof(vec) << " bytes" << std::endl;
    std::cout << "Size of vector: vec.size() " << vec.size() << std::endl;
    std::cout << "capacity of vector: vec.capacity() " << vec.capacity() << std::endl;
    std::cout << "Size of vector pointer: " << sizeof(pvec) << " bytes" << std::endl;
    std::cout << "Values in vec:";
    for (int val : vec) {
        std::cout << " " << val;
    }
    std::cout << std::endl;
    std::cout << "Values in vector through pointer:";
    for (int val : *pvec) {
        std::cout << " " << val;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    /*
the size of vector dont come as expected
This additional information typically includes:

Pointers: A vector needs to store pointers to manage its internal memory allocation and growth. These pointers can take up 8 bytes each on most systems, and there might be multiple pointers depending on the implementation.
Internal Data Structures: The vector class uses various internal data structures to manage its elements and operations efficiently. These structures require additional memory beyond just the data itself.
Other Members: Depending on the specific implementation, the vector class might have other member variables that contribute to its overall size.
*/
// Breakdown of the vector size
std::cout << "Breakdown of vector size:" << std::endl;
std::cout << "  Size and Capacity Information: " << sizeof(vec.size()) + sizeof(vec.capacity()) << " bytes" << std::endl;
std::cout << "  Pointer to Dynamic Array: " << sizeof(int*) << " bytes" << std::endl;
std::cout << "  Memory Overhead for Bookkeeping: " << sizeof(vec) - sizeof(vec.size()) - sizeof(vec.capacity()) - sizeof(int*) << " bytes" << std::endl;

    return 0;
}
