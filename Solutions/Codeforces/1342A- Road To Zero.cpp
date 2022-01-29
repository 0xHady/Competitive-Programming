#include <iostream>
#include <vector>
#include <math.h>
#define ll long long
// mobo babe
using namespace std;
 
int main()
{
 int t; cin >> t;
 while(t--){
  
  ll x,y,a,b; cin >>x>>y>>a>>b;
  ll uni,com;
   uni = abs(x-y);
  com = min (x,y);
  
  com =min(com*2*a, com*b);
  
  
  uni*= a;
  
  cout <<com + uni <<endl;
  
 }
}
