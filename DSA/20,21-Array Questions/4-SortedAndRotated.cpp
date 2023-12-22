#include<iostream>
#include<vector>
using namespace std;

int checkSortednRotated(vector <int> &v){
    int count = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i-1])
        {
            count++;
        }
        
    }
// note if we take count == 1 we miss cases where all elements equal so 
// also note tha comparing last and 1st elmt is also imp
    if (count <= 1 )
    {
        return 1;
    }
    return 0;
    
}

int main(){
    vector <int> v;
    int num;
    cout << "Enter the nummber of elements ";
    cin >> num;
    cout << "Enter the elements ";
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // cout << v[3];
    cout << checkSortednRotated(v);

return 0;
}