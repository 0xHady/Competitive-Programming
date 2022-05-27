#include <bits/stdc++.h>
using namespace std;
 
bool can(vector <int> &v,int x,int c){
    int cur = v[0] ; 
    while(--c){
        auto lb = lower_bound(v.begin(),v.end(),cur+x);
        if(lb == v.end()) return false;
        cur = v[lb-v.begin()];
    }
    return true;
}
 
void solve(){
    int n,c; cin >> n >> c;
    vector <int> v(n); 
    for(auto &i:v) cin >> i;
    sort(v.begin(),v.end());
 
    int l = 1, r = v[n-1]-v[0], ans = -1;
 
    while(l <= r){
        int mid = (l+r) >> 1;
 
        if(can(v,mid,c)) ans = mid, l =  mid+1;
        else r = mid - 1;
    }
    cout << ans << endl;
}
 
int main(){
    int TC = 1;
    cin >> TC;
    while(TC--){
        solve();
    }
}
