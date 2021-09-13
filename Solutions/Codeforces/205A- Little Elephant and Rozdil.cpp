#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int main(){ 
 thats_what_she_said
 int n ; cin >> n;
 pair <int ,int> mn;
 mn.first = INT_MAX;
 mn.second = 0;
 int res; 
 for(int i = 0 ; i < n; i++){
  int t; cin >> t;
  if(t < mn.first){
   mn = {t,1};
   res = i;
  }
  else if(t == mn.first)
   mn.second++;
 }
 if(mn.second == 1) cout << res+1;
 else cout << "Still Rozdil";
 
}
 
