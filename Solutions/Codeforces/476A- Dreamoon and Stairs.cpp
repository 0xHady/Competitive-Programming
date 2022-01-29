#include <bits/stdc++.h>
using namespace std;
int n , m;
bool check(int x){
 return ((n >= x)&&(n <= x*2));
}
int main(){
 cin >> n >> m;
 for(int i = 1 ; i*m <= n ; i++){
 
  if(check(i*m)){
   cout << i*m << endl;
   return 0;
  }
  cerr<<"cerr " << i*m << endl;
 }
 cout << -1 << endl;
}
