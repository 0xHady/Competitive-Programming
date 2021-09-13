#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
thats_what_she_said
    int n,m; cin >> n >> m;
    int cur = 1; 
    ull res = 0;
    for(int i = 0 ; i < m ; i++){
        int t; cin >> t;
        if(t > cur) res+=(t-cur); 
        else if(t < cur) res+= (n-cur+t);
        cur = t;
    }
    cout << res << endl;
}
