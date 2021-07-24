#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
 
int main(){
 int t; cin >> t;
 while(t--){
  string s; cin >> s;
  map <char,int> mp;
  int doubles = 0,solos = 0;
  for(int i = 0 ; i < s.size() ; i++)
   mp[s[i]]++;
 
  for(auto it:mp){
   if(it.second > 1) doubles++;
   else if(it.second == 1) solos++;
  }
 
  cout << doubles + (solos/2) << endl;
 }
}
