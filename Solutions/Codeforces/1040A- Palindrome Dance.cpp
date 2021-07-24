#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int n,a,b;
 cin >> n >> a >> b;
 vector < int > v(n); 
 int mx = -INT_MAX, mn = INT_MAX;
 for(int i =0 ; i < n ; i++){
  cin >> v[i];
  mx = max(mx,v[i]);
  mn = min(mn,v[i]);
 }
 
 int cheapSuit = min(a,b);
 int res = 0 ; 
 int e = n/2 -1;
 if(n%2 != 0) e++;
 for(int i = 0 ; i <= e ; i++ ){
  if(i == n/2 ) {if(v[i]== 2) res+=cheapSuit; continue;} 
  int prsum = v[i] + v[n-i-1];
  if(prsum == 1 ){ cout << "-1"; return 0;}
  else if(prsum == 4){res+= (2*cheapSuit);}
  else if(prsum ==0 || (v[i] ==1 && v[n-i-1] == 1)) {continue;}
  else if(prsum == 3 || prsum == 2 ){
   int x = min(v[i], v[n-i-1]);
   if(x == 0) res+=a;
   else res+=b; 
  }
 
 }
 
 cout << res << endl;
 
 
}
