#include <iostream>
#include <vector>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 int t ; cin >>t;
 while(t--){
  long long n; cin >>n;
  int res ;
  int z = to_string(n).size();
  int sz = z;
  res = (--z)*9;
  long long ones =1;
  long long nns =9;
  while(z--){
   ones = (ones*10 +1);
   nns = (nns*10 +9);
  }
  for(int i = ones; i <= nns; i+=ones){
   if(n >= i) res++;
   else break;
  }
  
  cout << res <<endl;
 }
}
