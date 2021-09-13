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
 int n ,m ; cin >> n >> m;
 vector <int> c(n),w(m);
 for(auto &x:c) cin >> x;
 for(auto &x:w) cin >> x;
 sort(all(c));
 sort(all(w));
 if(c[c.size() - 1 ] >= w[0] || c[0] * 2 >= w[0] ){ cout << -1; return 0;}
 if(c[0]*2 <= c[n-1])
 cout << c[n-1] << endl;
 else{
 for(int i = 0 ; i < n; i++){
  if(c[i]*2 >= w[0]){
   cout << -1;
   return 0;
  }
  if(c[i] * 2 >= c[n-1]){
   cout << c[i] * 2;
   return 0;
  }
 }
 }
 
    }
}
