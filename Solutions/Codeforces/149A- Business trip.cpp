#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes
    int k ; cin >>  k;
    vector <int> v(12);
    for(auto &x:v)cin >> x;
    sort(all(v));
    int res =  0;
    int sum = 0;
    for(int i = 11 ; i >= 0 ;i--){
        if( sum >= k) {cout << res; return 0;}
        sum+=v[i];
        res++;
        if( sum >= k) {cout << res; return 0;}
    }
    cout<< -1;
}
 
