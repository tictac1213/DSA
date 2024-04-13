// is complete BT with heap order property
/*
    min-heap, max-heap

    implementing in arr
    starting fom index 1
    for ith index the left child is at 2*i
    and right at 2*i + 1

    leaf nodes n/2+1 se nth index
*/

#include<bits/stdc++.h>
using namespace std;
// implementing max heap
class Heap{
    public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    // O(logn)
    void insert( int x){
        size = size + 1;
        int index = size;
        arr[index] = x;
        while (index > 1)
        {
            // parent
            int i = index/2;
            if( arr[i] < arr[index]){
                swap(arr[i],arr[index]);
                index = i;
           
            }
            else{
                return;
            }
        }
        
    }

    // deletion directly is possible for only root node or last element only
    // here implementing deletion of root
    void deleteFromHeap(){
        if(size == 0){
            cout << "Nothing to delete \n";
            return;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;
        while( index < size){
            if(2*index <= size && arr[index] < arr[2*index]){
                swap(arr[index],arr[2*index]);
                index *= 2;
            }
            else if(2*index +1 <= size && arr[index] < arr[2*index +1]){
                swap(arr[index],arr[2*index +1]);
                index = 2*index +1;
            }
            else{
                break;
            }
            
        }
    }

    void printh(){
        for (int i = 1; i <= size ; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    Heap maxi;
    maxi.insert(1);
    maxi.insert(6);
    maxi.insert(0);
    maxi.insert(9);
    maxi.insert(5);
    maxi.insert(3);
    maxi.printh();
    maxi.deleteFromHeap();
    maxi.printh();

return 0;
}