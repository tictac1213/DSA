#include <iostream>
#include <vector>

std::vector<int> a; // The array to be sorted
std::vector<int> link; // The auxiliary linked array

int Merge1(int q, int r) {
    int i = q, j = r, k = 0;
    while (i != 0 && j != 0) {
        if (a[i] <= a[j]) {
            link[k] = i;
            k = i;
            i = link[i];
        } else {
            link[k] = j;
            k = j;
            j = link[j];
        }
    }

    if (i == 0)
        link[k] = j;
    else
        link[k] = i;

    return link[0];
}

int MergeSort(int low, int high) {
    if (high > low ){
        int mid = (low + high) / 2;
        int q = MergeSort(low, mid);
        int r = MergeSort(mid + 1, high);
        return Merge1(q, r);
    }
    return low;
}

int main() {
    int n; // Size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    a.resize(n);
    link.resize(n);

    std::cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        link[i] = i; // Initialize the linked array
    }

    MergeSort(0, n - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        std::cout << a[link[i]] << " ";
    std::cout << std::endl;

    return 0;
}