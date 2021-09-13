#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 thats_what_she_said
 int n; cin >> n;
 vector <pair<int,int>> v;
 set <int> st;
 for(int i = 0 ; i < n ; i++){
  int t; cin >> t;
  v.push_back({t,0} );
 }
 sort(v.begin(), v.end());
 int res = 0;
 for(int i= 0 ; i < n ; i++){
  if(v[i].second != 0) continue;
  res++;
  int cur = v[i].first;
  v[i].second = 1;
 
  for(int j =i+1; j < n ; j++){
   if(v[j].first > cur && v[j].second == 0){
    cur = v[j].first;
    v[j].second = 1; 
   } 
  }
 }
 cout << res << endl;
}
