// https://www.codechef.com/problems/DIVSUBS?tab=statement
// this solution is partially correct

#include <iostream>
#include <vector>
using namespace std;



int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n,0),c(n,0);
        int sum = 0;
        for(int i=0; i < n ; i++){
            int x;
            cin >> x;
            sum=(sum+x)%n;
            v[i]=sum;
            c[sum]++;
            
        }
        int key=-1;
        for(int i = 0 ; i < n; i++){
            if(c[i]>1){
                key = i;
            }
        }
        
        
        if(key == -1){
            cout<<n<<endl;
            for(int i =1; i <= n; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
        // cout<<key<<endl;
        vector<int> ans;
        int flag=-2;
        int i = 0;
        for(; v[i] != key; i++ ){
            
        }
        
        // cout<<i<<endl;
        do{
            i++;
            ans.push_back(i+1);
            // cout<< v[i]<<" ";
        }while(v[i]!= key);
        
        int j = ans.size();
        cout << j<<endl;
        for(int i = 0; i< j; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        }
        
    }
    
	return 0;
}

