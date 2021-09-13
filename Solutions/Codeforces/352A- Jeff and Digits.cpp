#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){ 
 thats_what_she_said
 int n; cin >> n;
 string s ="";
 int z = 0, f = 0;
 for(int i = 0 ; i < n ; i++){
  char t; cin >> t;
  if(t == '0') z++; else f++;
 }
 
 if(z == 0) cout << -1 << endl;
 else if((n < 10 && z >= 1) || f < 9) cout << 0 << endl;
 else {
  int q = f/9;
  f = q*9;
  for(int i = 0 ; i < f ; i++) cout << 5;
  for(int i = 0 ; i < z ; i++) cout << 0;
 } 
}
