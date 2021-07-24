#include <bits/stdc++.h>
#define endl "\n"
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 Hello_World
 int n ; cin >> n;
 int c1,c2;
 for(int i = 0 ; i < n ; i++){
  int t; cin >>t ;
  int tt = t;
  while(t%3 != 0){
  t--;
  }
  c1  = (t/3);
  c2 = (t/3);
  if(tt - t == 1) c1++;
  else if(tt - t ==  2) c2++;
 
 cout << c1 << ' ' << c2 << endl;
 }
 
 
}
