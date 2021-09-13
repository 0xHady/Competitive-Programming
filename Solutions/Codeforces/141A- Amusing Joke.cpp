#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 thats_what_she_said
 string a,b,c; cin >> a >> b >> c;
 a+=b;
 sort(a.begin(), a.end());
 sort(c.begin(), c.end());
 if(a == c) cout << "YES" << endl;
 else cout << "NO" << endl;
 
}
