#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int n; 
 cin >> n;
 int mx =-INT_MAX, mn = INT_MAX ;
 int minLastPos = n-1, maxFirstPos = 0; 
  for(int i = 0 ; i < n ; i++){
  int t;
  cin >> t;
  if(t > mx){
  maxFirstPos = i;
  } 
  if( t <= mn){
  minLastPos = i;
  }
  mx = max(mx,t);
  mn = min(mn,t);
 }
 int res = (n - minLastPos - 1)+ maxFirstPos; 
 if(minLastPos < maxFirstPos) cout <<res-1 << endl; 
 else cout << res << endl;
 
 
}
