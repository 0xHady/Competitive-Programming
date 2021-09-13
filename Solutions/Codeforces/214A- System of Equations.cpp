#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes
    int n ,m; cin >> n  >> m;
    int res = 0;
    for(int i = 0 ; i <= sqrt(n) ; i++){
        for(int j = 0 ; j <= sqrt(m) ; j++){
            if( (i*i + j) == n && (i + j*j) == m )
                res++;
        }
    }
    cout << res;
 
}
 
