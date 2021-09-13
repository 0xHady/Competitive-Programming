#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int main(){
 thats_what_she_said
 int n,m; cin >> n >> m;
 deque <pair<int,int>> dq ; // ai, index
 for(int i = 1 ; i <= n ; i++){
 int t; cin >> t;
 dq.push_back({t,i});
 }
 int res ; 
 for( ;!dq.empty();){
  res  = dq.front().second;
  dq.front().first -= m;
  if(dq.front().first > 0) dq.push_back(dq.front());
  dq.pop_front();
 }
 cout << res << endl;
}
