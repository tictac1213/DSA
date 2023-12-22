#include<bits/stdc++.h>
#include<vector>
using namespace std;

void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i=0,j=0;
        while(i<m && j <n){
            if(num1[i]>=num2[j]){
                num1.insert(num1.begin()+i,1,num2[j]);
                j++;
              
            }
            else{
                i++;
            }
       }
       while(j<m){
           num1.push_back(num2[j]);
           j++;
       }
    }

int main()
{
    vector <int> a={1,3,5,0,0,0} ,b={2,4,6}; 

    merge(a, 3, b, 3);
    for (auto i : a)
    {
        cout<<a.at(i);
    }
    

    return 0;
}