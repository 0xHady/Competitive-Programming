#include <iostream>
#include <vector>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 long long t,res,n,s; cin >>t;
 while(t--){
  cin >>n>>s;
  if(n == 1) res = 0;
  else if(n==2) res = s;
  else res = s*2;
  
  cout << res << endl;
 }
 
}
