#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x  minutes 
    int n ,k ; cin >> n >> k;
    int kk;
    vector <int> v(n);
    for(int i = 0 ; i < n ; i++){
        int t ; cin >> t;
        v[i] = t;
        if(i+1 == k){
            kk = t;
        }
        if(i+1 > k){
            if(t != kk){
                cout << "-1"; 
                return 0;
            }
        }
    }
    int ans = 0;
    for(int i =0 ; i < k; i++){
        if(v[i] != kk)
            ans = i+1;
    }
    cout << ans;
}
 
