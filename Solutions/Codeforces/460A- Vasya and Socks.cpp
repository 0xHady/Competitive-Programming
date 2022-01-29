#include <iostream>
#include <vector>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 int n,m; cin >>n>>m;
 int res = n;
 while(res != (res/m +n)){
  res = n+res/m;
 
 }
 
 cout << res;
}
