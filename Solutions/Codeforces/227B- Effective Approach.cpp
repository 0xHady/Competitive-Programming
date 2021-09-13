#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 thats_what_she_said
 int n; cin >> n;
 map <int,int> mp; // num, index
 for(int i = 0 ; i < n; i++){
  int t ; cin>> t;
  mp[t] = i;
 }
 int m ; cin >> m;
 unsigned long long int v = 0, p = 0;
 while(m--){
  int b; cin >> b;
  v+= (mp[b] - 0 +1);
  p+= (n-mp[b] );
 }
 cout << v << ' ' << p << endl;
}
