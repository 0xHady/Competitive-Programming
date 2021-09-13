#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes 
    ll n; cin >> n;
    vector <ll> v(n);
    map <ll,ll> mp;
    bool allsame = 1;
    int h;
    bool firs = 1;
    ll mn = LONG_MAX, mx = -LONG_MAX;
    for(auto &x:v){ 
        cin>>x;
        mn = min(mn,x);
        mx = max(mx,x);
        mp[x]++;
        if(firs){firs = false; h = x;}
        else{ if(x != h) allsame = false;}
    }
    if(allsame){cout << 0 << ' ' <<  n*(n-1)/2; return 0;}
    ll dif = mx - mn;
    ull res = 0;
    sort(all(v));
    for(int i = 0 ; i < n; i++){
        res += mp[v[i]]*mp[v[i]+dif];
        mp[v[i]] =0; mp[v[i]+dif] = 0;
    }
    cout << dif << ' '<< res  ;
}
 
