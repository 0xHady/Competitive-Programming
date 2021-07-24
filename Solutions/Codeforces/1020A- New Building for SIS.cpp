#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n,h,a,b,k,ta,fa,tb,fb;
 
void solve(){
int res = 0;
//cout << "res: ";
//determine the closest passage for both 
int passage ,mn = INT_MAX;
int arr[4] = {a,b,fa,fb};
for (int i = 0 ; i < 4 ; i++){
 if(arr[i] >= a && arr[i] <=b){
 int p = abs(fa-arr[i] ) + abs(fb-arr[i] );
 if(p < mn){ passage = arr[i] ; mn = p ;} 
}
}
 
if(ta == tb) cout << abs(fb-fa)<< endl;
else  cout << abs(fa - passage) + abs(tb-ta) +abs(fb-passage)<< endl;
 
}
 
int main(){
 cin >> n >> h >> a >> b >> k;
 for(int i = 0 ; i < k ; i++){
  cin >> ta>> fa >> tb >> fb;
  solve(); 
 } 
 
 
}
