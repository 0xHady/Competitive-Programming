#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
 
int main(){
 int n ; 
 cin >> n;
 int current = 0, mx = -INT_MAX;
 for (int i = 0 ; i < n ; i++){
  int exiters,enterers;
  cin >> exiters >> enterers;
  current = max(current - exiters , 0);
  current += enterers;
  mx = max(mx,current); 
 
 
 }
 cout << mx << endl;
 
}
