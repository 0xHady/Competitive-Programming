#include <iostream>
#include <vector>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 int t; cin>> t;
 while(t--){
  int n; cin >>n;
  int res =0;
  for(int i =1; i <= n ; i++){
   int x; cin >>x;
   res = max(res,x-i);
  }
  cout << res << endl;
 }
}
