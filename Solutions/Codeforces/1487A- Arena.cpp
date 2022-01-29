#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
// mobo babe
using namespace std;
 
int main()
{
 int T = 1;
 cin >>T;
 while(T--)
 {
  int n; cin >>n;
  vector <int> v(n);
  int mn = INT_MAX;
  for(auto &i:v){
   cin>>i;
   mn= min(mn,i);
  }
  sort(v.begin(),v.end());
  int res =n;
  for(auto &i:v){
   if(i==mn)res--;
   else break;
  }
  cout << res <<endl;
  
  
  
 }
 
}
