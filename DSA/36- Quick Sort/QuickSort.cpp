#include<iostream>
#include<vector>
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

int Partition(vector <int> &v, int s,int e){
    int p = v[s];
    int pivotIndex = 0;
    int i = s, j = e;
    while (i < j){
        while (v[i] <= p && i < e)
        {
            i++;
        }

        while (v[j] > p && j > s )
        {
            j--;
        }
        if( i <= j )
        swap(v[i],v[j]);    
    }
        swap(v[s],v[j]);
    
    return j;
}

void quickSort(vector <int> &v, int s,int e){
    if (s >= e) 
    {
        return;        
    }
 
    int pivot = Partition(v,s,e);
    quickSort(v,s,pivot-1);
    quickSort(v,pivot+1,e);
}

int main(){
    vector <int> v = {9,8,7,6,4,5,3,2,1};
    printVec(v);
    int n = v.size();
    quickSort(v,0,n-1);
    printVec(v);



return 0;
}