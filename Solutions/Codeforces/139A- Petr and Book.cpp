#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 thats_what_she_said
 int n; cin >> n;
 int days[7];
 for(int i = 0 ; i < 7 ;i++) cin >> days[i];
 for(int i = 0 ; ;i = (i+1)%7){
  n-=days[i];
  if(n <= 0){
   cout<< i+1;
   return 0;
  }
 }
 
}
