#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes
    int n,m;
    cin >> n ;
    int f[n];
    for(int i = 0 ; i < n; i++) cin >> f[i];
    cin >> m;
    int s[m];
    for(int i = 0 ; i < m; i++) cin >> s[i];
    int mx = -1;
    map <int ,int > mp;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m ; j++){
            double d = (double)s[j]/f[i];
            int ii =  s[j]/f[i];
            if(d == ii){
                mp[ii]++;
                if(ii >= mx) mx = ii;
            }
        }
    }
    cout << mp[mx] << endl;
 
}
 
