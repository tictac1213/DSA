#include<bits/stdc++.h>
using namespace std;


// Output should be passed without reference
void solve(vector<int> &arr, int index, vector<int> output, vector<vector<int>> &ans ){
    if( index >= arr.size()){
        ans.push_back(output);
        return;
    }
    // not including
    solve(arr,index+1,output,ans);

    // including
    output.push_back(arr[index]);
    solve(arr,index+1,output,ans);
}

vector<vector<int>> createPowerSet(vector<int> arr){
    vector<vector<int> > ans;
    vector<int> output ;
    solve(arr,0,output,ans);
    return ans;
}


int main(){
    vector<int> arr ={1,2,3};
    vector <vector<int>> powerSet = createPowerSet(arr);


return 0;
}