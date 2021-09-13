#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){ 
 thats_what_she_said
 int n,nn; cin >> n;
 nn = n;
 vector <int> v;
 while(nn--){int t; cin >> t; v.push_back(t);}
 int a,b; 
 int mn = INT_MAX;
 for(int i = 0 ; i < n; i++){
  for(int j = i+1 ; j < i+2 ; j++){
   int cur= abs(v[i]-v[j]);
   if(abs(cur < mn)){
    mn = cur;
    a = i+1; b = j+1;
   }
  }
 }
 if(abs(v[n-1]-v[0]) < mn) { a = n; b =1;}
 cout << a << " " << b << endl;
    
}
