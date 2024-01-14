// bi < bi+1
#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i = n-1; i >= 0 ; i--){
        if(s.top() != -1){

        while(s.top() != -1 && arr[i] < arr[s.top()] ){
            s.pop();
        }
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}


int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> arr(n);
        multiset<int> s;
        int ans = 0;
        for (int i = 0; i < n ; i++)
        {
            cin >> arr[i];
            // s.insert(arr[i]);
        }
        vector<int> record = nextSmallerElement(arr,n);
        vector<bool> visit(n,false);
        for (int i = 0; i < n - 1  ; i++)
        {
            if(record[i] == -1 ){
                ans++;
            }
            else{
                if(visit[record[i]]){
                    int temp = record[i];
                    while(record[temp] != -1 && visit[temp]){
                        temp = record[temp];
                    }
                    if(temp == -1 || temp == record[i]){
                        ans++;
                    }
                    else{
                        visit[temp] = true;
                    }
                }
                visit[record[i]] = true;
            }
        }
        if(ans > 1 )
            ans--;

        if( n > 2)
        cout << ans << endl;
        else
        cout << 0 << endl;
    }

    return 0;
}