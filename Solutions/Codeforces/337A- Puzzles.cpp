#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes 
    int n,m; cin >> n >> m;
    vector <int> v(m);
    for(auto &x:v) cin >> x;
    sort(all(v));
    int res = INT_MAX;
    for(int i  = 0 ; i < m -n+1 ; i++){
        res = min(res,v[i+(n-1)]-v[i]);
    }
    cout << res;
}
 
