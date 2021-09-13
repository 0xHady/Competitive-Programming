#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes 
 int n,m;
 cin>> n;
 vector <int> a(n);
 for(auto &x:a) cin >> x;
 
 cin>> m;
 vector <int> b(m);
 for(auto &x:b) cin >> x;
 
 int i = 0 , j = 0;
 int ans = 0;
 ull curI = a[0], curJ = b[0];
 bool pass;
 while(i < a.size() && j < b.size()){
  if(i >= a.size() || j >= b.size()){cout << -1; return 0;}
  pass = (curI == curJ);
  while(curI != curJ && i < a.size() && j < b.size() ){
   while(curI < curJ && i < a.size()){i++; curI += a[i];}
   while(curJ < curI && j < b.size()){j++; curJ += b[j];}
   pass = (curI == curJ);
   
  }
 if(pass){ 
  ans++; i++; j++; 
  if(i < a.size()) 
  curI = a[i];
  if(j < b.size())
  curJ = b[j];
 
  if( (i>=a.size())+(j>=b.size()) == 1){cout << -1; return 0;}
 }
 else {cout << -1; return 0;}
 
  
 } 
 cout << ans;
}
 
 
