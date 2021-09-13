#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said
    ll t ; cin >> t;
    while(t--){
        ll res = 0 , n; cin >>  n;
        vector <ll> a(n);
        for(auto &it:a) cin >> it;
        for(int i  = 1; i < n;i++) res = max(res, a[i] * a[i - 1]);
        cout << res << endl;
    }
}
 
