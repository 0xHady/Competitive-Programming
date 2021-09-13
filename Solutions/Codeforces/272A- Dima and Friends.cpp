#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
using namespace std;
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {  
 int n;  cin >>  n;
 int sum = 0 ;
 for(int i   = 0 ; i < n ; i++){
  int t; cin >> t;
  sum+=t;
 }
 int ans = 0 ;
 for(int i = 1 ; i <=5; i++){
  if((sum+i)% (n+1) != 1) 
   ans++;
 }
 cout << ans << endl;
    }
}
