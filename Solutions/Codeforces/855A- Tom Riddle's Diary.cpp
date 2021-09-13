#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 thats_what_she_said
 int n; cin >> n;
 map <string,int> mp;
 while(n--){
 string s; cin >> s;
 if(mp[s] > 0) cout << "YES" << endl;
 else cout << "NO" << endl;
 mp[s]++;
 }
}
