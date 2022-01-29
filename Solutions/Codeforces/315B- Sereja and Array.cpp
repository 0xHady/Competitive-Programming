#include <iostream>
#include <vector>
#include <math.h>
#define ll long long
// mobo babe
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
ll y = 0;
 
thats_what_she_said
 ll n,m,t; cin >>n>>m;
 ll v[n];
 for(int i = 0; i< n ;i++)cin>>v[i];
 while(m--){
  cin>>t;
  if(t==1){
   ll vth,x; cin>>vth>>x;
   v[--vth] = x-y;
  }else if(t==2){
   ll yy; cin>>yy;
   y+=yy;
  }else{
   ll q; cin>>q;
   cout << v[--q]+y << endl;
  }
 }
}
