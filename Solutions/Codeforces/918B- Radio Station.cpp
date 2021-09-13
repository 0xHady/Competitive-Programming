#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 thats_what_she_said
 int n,m; cin >> n >> m;
 map <string,string> mp;
 for(int i = 0 ; i < n ; i++){
  string name,ip;
  cin >> name >> ip;
  ip+=";";
  mp[ip] = name;
 }
 for(int i = 0 ; i < m ; i++){
  string command, ip;
  cin  >> command >> ip;
  cout << command << " " << ip << " #";
  cout << mp[ip] << endl; 
 }
}
