#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes 
    int n,k,res = 0,h; cin >> n >> k;
    k--;
    vector <int> v(n);
    for(int i = 0 ; i < n ; i++){ cin >> v[i]; if(i == k) h = v[i];}
    for(auto x:v) if(x >= h && x > 0) res++;
    cout << res << endl;
}
 
