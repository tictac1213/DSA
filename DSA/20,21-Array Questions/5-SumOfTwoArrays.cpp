#include<iostream>
#include<vector>
using namespace std;

void inputVec(vector <int> &v,int size){
    int x;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    
}
void displayVec(vector <int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> addVec(vector<int> &v1, vector<int> &v2){
    vector <int> sum;
    int carry = 0;
    int s1 = v1.size()-1, s2 = v2.size()-1;
    while (s1 >= 0 && s2 >= 0)  
    {
        int k = v1[s1--] + v2[s2--] + carry;
        if( k > 9 ){
            carry = 1;
            k -= 10; 
            sum.push_back(k);
        }
        else{
            carry =  0;
            sum.push_back(k);
        }

    }
    if (s1 >= 0)
    {
        while (s1 >= 0)
        {
            int k = v1[s1--] + carry;
            sum.push_back(v1[k]);
        }
        
    }
    else if (s2 >= 0)
    {
        while (s2 >= 0)
        {
            int k = v2[s2--] + carry;
            sum.push_back(v2[k]);
        }
        
    }
    else if (carry){
        sum.push_back(carry);
    }
    int f = sum.size();
    for (int i = 0; i < f/2; i++)
    {
        swap(sum[i],sum[f-1-i]);
    }
    
    return sum;
} 

int main()
{
    int size1, size2;
    cout << "Enter the size of 1st array ";
    cin >> size1; 
    cout << "Enter the size of 2nd array ";
    cin >> size2; 
    vector <int> v1,v2;
    cout << "Enter the elements of 1st array \n";
    inputVec(v1,size1);
    // displayVec(v1);
    cout << "Enter the elements of 2nd array \n";
    inputVec(v2,size2);

    vector <int> sum=addVec(v1,v2);
    displayVec(sum);

    return 0;
}