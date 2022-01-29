#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
// mobo babe
using namespace std;
vector <int> a;
 
int bsLowerIt(int lo, int hi, int target){ //lower Bound    // first to  >= target
    while (lo < hi){
        int mid = (lo + hi ) / 2;
        if( a[mid] > target) hi = mid;
        else lo = mid + 1 ;
    }
    if(a[lo] > target) return lo;
    else return 0;
}
 
int main()
{
 int n; cin >>n;
 a.resize(n+1);
 a[n] =1000000001;
 for(int i = 0; i <= n-1; i++) cin >> a[i];
 sort(a.begin(),a.end());
 int t; cin >>t;
 while(t--){
  int x; cin >>x;
  cout <<bsLowerIt(0,n,x) << endl;
 }
 
}
