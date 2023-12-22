#include<iostream>
using namespace std;

void inputArr(int* arr, int size){
    cout << "input the elements \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
}

void displayArr(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeSort(int* a, int*b,int n, int m){
    int i1 = 0, i2 = 0;

    while (i1 < n && i2 < m )
    {
        if (a[i1] < b[i2])
        {
            cout << a[i1++] << " ";
        }
        else{
            cout << b[i2++] << " ";
        }
        
    }
    
    if (i1 < n )
    {
        while (i1 < n )
        {
            cout << a[i1++];
        }
        
    }
    else{
        while (i2 < m )
        {
            cout << b[i2++];
        }
    }
    
}

int main(){
    int n, m;
    cout << "Enter the number of elements in 1st array ";
    cin >> n;
    int a[n];
    inputArr(a,n);

    cout << "Enter the number of elements in 2nd array ";
    cin >> m;
    int b[m];
    inputArr(b,m);

    mergeSort(a,b,n,m);

return 0;
}