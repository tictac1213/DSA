#include<iostream>
using namespace std;


int main(){
    int a[5] = {1,2,3,4,5};
    //  arr[i] == *(arr+i) == i[arr]
    cout<< 4[a]<<endl;
    // arr == &arr = &arr[0]
// array example
    int arr[] = {1, 2, 3, 4, 5};
    int* parr = arr;

    std::cout << "array example:" << std::endl;
    std::cout << "Size of array: " << sizeof(arr) << " bytes" << std::endl;
    std::cout << "Size of array pointer: " << sizeof(parr) << " bytes" << std::endl;
    std::cout << "Values in arr:";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
    std::cout << "Values in array through pointer:";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        std::cout << " " << *(parr + i);
    }
    std::cout << std::endl;
    std::cout << std::endl;


return 0;
}