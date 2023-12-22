// #include<bits/stdc++.h>
// using namespace std;

// int inversion = 0;
// void printVec(vector <int> v){
//     int n = v.size();
//     cout<< "\nsize: "<< n <<endl;
//     for (int i = 0; i < n ; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout<< endl; 
// }

// void countInversion(vector <int> &arr, int s, int e )
// {
//     int mid = (s+e)/2;
//     int len1 = mid - s + 1, len2 = e - mid;
//     vector<int> first(len1);
//     vector<int> second(len2);
//       for (int i = 0 ; i < len1 ; i++)
//     {
//         first[i] = arr[i+s]; 
//     }

//     for (int i = 0  ; i < len2  ; i++)
//     {
//         second[i] = arr[i+mid +1]; 
//     }
//     int i = 0, j = 0;
//     while (i < len1 && j < len2)
//     {
//         if(first[i] > second[j]){
//             inversion+= len2-j;
//             j++;
//         }
//         else{
//             i++;
//         }
//     }
    

    
    
    


// }

// void Divide(vector<int> &arr ,int s, int e){
//     if(s >= e ){
//         return;
//     }
//     int mid = (s + e)/2;
//     Divide(arr,s,mid);
//     Divide(arr,mid+1,e);
//     countInversion(arr,s,e);
// }


// int main(){
//     vector <int> arr = {8,4,2,1,9,10};
//     printVec(arr);
//     int n = arr.size();
//     Divide(arr,0,n-1);
//     cout << inversion ;
   




// return 0;
// }