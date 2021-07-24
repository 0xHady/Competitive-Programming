#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
 
int main(){
 int n; cin >> n;
 int lo,lc,ro,rc;
 lo = lc = ro = rc = 0;
 for(int i = 0 ; i < n ; i++){
  int t; cin >> t;
  if(t  == 0) lc++;
  else lo++;
  cin >> t;
  if(t == 0) rc++;
  else ro++; 
 } 
 cout << min(rc,ro) + min(lo,lc) << endl;
}
