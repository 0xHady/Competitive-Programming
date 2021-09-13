#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){ 
 thats_what_she_said
 int n; 
 cin >> n;
 vector <int> v(n);
 for(int i = 0 ; i < n ; i++) cin >> v[i];
 int mx = 0; 
 for(int i = 0; i < n ; i++){
  int cur =  0;
  for(int j = i; j < n ; j++){
   cur^=v[j];
   mx = max(mx,cur);
  }
 }
 cout << mx ;
}
