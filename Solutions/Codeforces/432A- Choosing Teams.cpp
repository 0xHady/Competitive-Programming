#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 int n,k; cin >>n>>k;
 vector<int> v(n);
 for(auto &i:v)cin >>i;
 sort(v.begin(),v.end());
 int res = 0;
 for(int i =2; i <n; i+=3){
  if(v[i]+k <= 5) 
   res++;
 }
 cout << res <<endl;
}
