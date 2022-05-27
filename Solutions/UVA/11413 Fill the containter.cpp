// UVA 11413 FILL THE CONTAINTER

#include <bits/stdc++.h>
#define ll long long
#define vi vector <int>
using namespace std;

bool can(vi &v , int x,int m){
    ll cur = 0, tot = 0;

    for(auto &i:v){
       if(i > x) return false;

       if(cur + i  > x) cur = 0; 

       tot +=(cur == 0);

       cur += i;
   }
    return tot <= m;
}

void solve(int n,int m){
    vi v(n);
    ll sum = 0;
    for(auto &i:v){
        cin >> i;
        sum += i;
    }

    int l = 1;
    int r = sum; 
    int ans = -1;

    while(l <= r){
        int mid = (l+r) >> 1;

        if(can(v,mid,m)){ 
            ans = mid; 
            r = mid - 1;
        } 
        else 
            l = mid + 1;
    }
    cout << ans << endl;
}

int main(){
    int n,m;
    while(cin >> n >> m) 
    solve(n,m);
}
