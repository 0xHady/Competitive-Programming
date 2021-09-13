#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int v[8];
thats_what_she_said // x  minutes 
    int n ; cin >> n; 
    int nn = n;
    while(nn--){
        int t; cin >> t;
        v[t]++;
    }
    v[0] = v[5] = v[7] = 0;
    int g124 = 0, g126 = 0, g136 = 0;
    // 1 2 4 
    while( v[1] &&  v[2] &&  v[4]){
        v[1]--; v[2]--; v[4]--;
        g124++;
    }
    // 1 2 6
    while( v[1] &&  v[2] &&  v[6]){
        v[1]--; v[2]--; v[6]--;
        g126++;
    }
    // 1 3 6
    while( v[1] &&  v[3] &&  v[6]){
        v[1]--; v[3]--; v[6]--;
        g136++;
    }
    //cout << g136 << ' '<< g126 << ' ' << g124 << endl;
    int sum  = 0;
    if((3 *(g136 + g126 + g124)) < n) cout << "-1";
    else
    {
        while(g124--) cout <<"1 2 4" << endl;
        while(g126--) cout <<"1 2 6" << endl;
        while(g136--) cout <<"1 3 6" << endl;
    } 
}
 
