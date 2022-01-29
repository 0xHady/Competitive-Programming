#include <bits/stdc++.h>
#define endl "\n"
 
using namespace std;
 
int main()
{
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> v(n);
        for(auto &i:v) cin >> i;
        if(n ==1){
            cout<< "YES";
            cout << endl;
            continue;
        }
        sort(v.begin(),v.end());
        bool f = 1;
        for(int i = 1 ; i < n ; i++){
            if(v[i] - v[i-1] > 1){
                f = 0;
                break;
            }
        }
        if(f) cout << "YES" ; else cout << "NO";
        cout << endl;
    }
 
 
    return 0;
}
