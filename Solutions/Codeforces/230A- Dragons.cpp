#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes 
    int s , n; cin >> s >> n;
    int curS = s;
    vector <pair<int,int>> v(n);
    for(auto &x:v){cin >> x.first; cin>>x.second;}
    sort(all(v));
 
    for( int i = 0 ; i < n ; i++){
        if(curS <=v[i].first) {cout <<  "NO" ; return 0;}
        curS += v[i].second; 
    }
    cout << "YES" ;
 
}
 
