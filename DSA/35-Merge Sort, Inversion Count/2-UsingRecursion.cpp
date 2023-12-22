#include<bits/stdc++.h>
using namespace std;

void printVec(vector <int> v){
    int n = v.size();
    cout<< "\nsize: "<< n <<endl;
    for (int i = 0; i < n ; i++)
    {
        cout << v[i] << " ";
    }
    cout<< endl; 
}

void Merge(vector <int> &arr, int s, int e )
{
    int mid = (s+e)/2;
    int len1 = mid - s + 1, len2 = e - mid;
    vector<int> first(len1);
    vector<int> second(len2);
      for (int i = 0 ; i < len1 ; i++)
    {
        first[i] = arr[i+s]; 
    }

    for (int i = 0  ; i < len2  ; i++)
    {
        second[i] = arr[i+mid +1]; 
    }
    
    int arrIndex = s;
    int i = 0 , j = 0;

    while (i < len1 && j < len2)
    {
        if (first[i] <= second[j] )
        {
            arr[arrIndex++] = first[i++];
        }
        else{
            arr[arrIndex++] = second[j++];
        }
        
    }

    while (i < len1)
    {
        arr[arrIndex++] = first[i++];
    }

    while (j < len2)
    {
        arr[arrIndex++] = second[j++];
    }
    
    


}

void mergeSort(vector<int> &arr ,int s, int e){
    if(s >= e ){
        return;
    }
    int mid = (s + e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    Merge(arr,s,e);
}


int main(){
    vector <int> arr = {9,8,6,7,8,9,4,5,2,1,3};
    printVec(arr);
    int n = arr.size();
    mergeSort(arr,0,n-1);
    printVec(arr);




return 0;
}