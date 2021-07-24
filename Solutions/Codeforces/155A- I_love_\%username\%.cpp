#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
 
int main(){
 int n; cin >> n;
 int mx = -INT_MAX, mn = INT_MAX ;
 int res = 0;
 int l; cin >> l;
 mx = mn = l;
 for (int i =1 ; i < n ; i++){
  int t; cin >> t;
  if(t > mx || t < mn) res++;
  mx = max (mx,t);
  mn = min (mn,t); 
 } 
 cout << res << endl;
 
}
