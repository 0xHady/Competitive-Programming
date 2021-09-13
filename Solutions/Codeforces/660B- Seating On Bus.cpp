#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){ 
 thats_what_she_said
 int n , m; cin >> n >> m;
 n*=4;
 int s = (n/2)+1, r = 1;
 int off = 0;
 while(off < m){
  if(s <= m){ cout << s << " "; off++;}
  if(r <= m){ cout << r << " "; off++;}
  r++; s++;
  
 }
}
