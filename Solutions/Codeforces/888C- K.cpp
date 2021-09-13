#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
string s; 
bool check (int len, char c){
 int freq = 0;
 for(int i = 0 ; i < len; i++)
  freq +=(s[i] == c);
 if(!freq) return false;
 for(int i = 1 ; i + len - 1 < s.length(); i++){
  freq -=(s[i-1] == c);
  freq +=(s[i + len - 1] == c);
  if(!freq) return false;
 }
 return true;
}
thats_what_she_said // x minutes 
int ans  = INT_MAX;
 cin >> s;
 for(char i = 'a' ; i <= 'z'; i++){
  int lo = 1 , hi = s.size(), mid;
  while(lo < hi){
   mid = lo + (hi - lo) / 2;
   if(check(mid,i)) hi = mid;
   else lo = mid + 1;
  }
  ans = min(ans, lo);
 }
 cout << ans ;
}
 
 
