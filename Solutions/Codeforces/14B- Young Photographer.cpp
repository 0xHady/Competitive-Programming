#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int freq[1001];
bool cross(int a1, int b1, int a2, int b2){
 if(a1 > b1) swap(a1,b1);
 if(a2 > b2) swap(a2,b2);
 return min(b1,b2) >= max(a1,a2);
}
 
int main(){ //took 58:42 minuets
 thats_what_she_said
 int n,x; cin >> n >> x;
 int res = x ;
 int la, lb;
 int nn = n;
 int mdist;
 while(nn--){
  int a , b; cin >> a >> b;
  if(a > b) swap(a,b);
  if(nn == (n-1)){ la = a, lb = b;}
  else{
   if(!cross(la,lb,a,b)){cout << "-1"; return 0;}
   //else { la = a; lb = b;}
  }
  
 for(int i = a; i <= b ;i++)
  freq[i]++;
 }
 int s = 2000,e = -1;
 for(int i = 0 ; i <1001; i++){
  if(freq[i] == n){
  //cout <<"i: " << i << " " ;
  s = min(s,i);
  e = max(e,i);
  }
 }
 if(x <  s ||  x > e)
 cout << min(abs(x-s),abs(x-e))<< endl;
 else 
 cout << 0;
}
