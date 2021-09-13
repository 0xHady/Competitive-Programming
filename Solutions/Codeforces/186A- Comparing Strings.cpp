#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x  minutes 
    string a , b; cin >> a >> b;
    vector <int> v;
    if(a.size() != b.size()){cout << "NO" ; return 0;}
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            v.push_back(i);
    } 
    if(v.size() != 2){cout << "NO"; return 0;}
    if(a[v[0]] != b[v[1]] || a[v[1]] != b[v[0]]) {cout << "NO"; return 0;}
 
 
    cout << "YES" ;
 
}
