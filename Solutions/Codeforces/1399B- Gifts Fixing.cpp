#include <iostream>
#include <vector>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 int t; cin >>t ;
 while(t--){
  int n ; cin>> n;
  vector <int> a(n), b(n);
  int mna= INT_MAX;
  int mnb= mna;
  for(auto &i:a) cin >>i, mna =min (mna,i);
  for(auto &i:b) cin >>i, mnb =min (mnb,i);
  cerr << "mna,mnb:  " << mna<<' ' <<mnb << endl;
  long long res = 0;
  for(int i =0 ; i < n ; i++){
   int h,l; h = l =0;
   if(a[i] > mna) h = a[i] - mna;
   if(b[i] > mnb) l = b[i] - mnb;
   res+= max(h,l);
  }
  cout << res <<endl;
 }
}
