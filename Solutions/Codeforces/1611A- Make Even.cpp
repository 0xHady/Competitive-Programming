#include <iostream>
#include <vector>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 int T = 1;
 cin >>T;
 while(T--)
 {
  
  string n ; cin >>n;
  if((n[n.size()-1] - '0') %2 == 0){
   cout << 0 << endl;
   continue;
  }
  if((n[0]-'0')%2 ==0){
   cout << 1 << endl;
   continue;
  }
  bool f = 0;
  for(auto &i:n){
   if((i-'0')%2==0){
    f =1;
    break;
   }
  }
  if(f) cout << 2 << endl;
  else cout << -1 << endl;
  
 }
 
}
