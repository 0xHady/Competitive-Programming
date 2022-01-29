#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 int t;cin>>t;
 while(t--){
  int n; cin >>n;
  map<int,int> freq,pos;
  
  for(int i = 1; i <=n;i++){
   int x; cin >>x;
   if(pos[x]== 0) pos[x] = i;
   freq[x]++;
  }
  for(auto &i:freq){
   if(i.second == 1){
    cout << pos[i.first] <<endl;
    break;
   }
  }
 
 }
}
