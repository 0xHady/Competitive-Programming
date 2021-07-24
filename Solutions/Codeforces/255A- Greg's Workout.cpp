#include <iostream>
using namespace std;
 
int main(){
 int n;
 cin >> n;
 int bi = 0 , ba =0 , ch = 0 ;
 int r = 1;
 for (int i = 0 ; i < n ; i++ )
 {
 
  int t; 
   cin >> t;
  if(r == 1) ch += t;
  else if( r== 2) bi+=t;
  else ba+= t;
  r = (r+1)%4;
  if(r == 0) r++;
 }
 if(bi > ba && bi > ch) cout << "biceps" << endl;
 else if(ba > bi && ba > ch) cout << "back" << endl;
 else cout << "chest" << endl;
 return 0;
}
