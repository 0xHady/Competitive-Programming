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
 int n ; cin >> n;
 vector <int> v(n);
 for(auto &x:v) cin >> x;
 sort(all(v));
 for(int i = 0 ; i < n; i++){
 int mn ,mx;
  if(i != 0 && i != n-1){
   mn = min(abs(v[i-1]-v[i]),abs(v[i+1]-v[i]));
   mx = max(abs(v[0]-v[i]),abs(v[n-1]-v[i]));
  }else if(i == 0){
   mn = abs(v[i+1]-v[i]);
   mx = abs(v[n-1]-v[i]);
  }else if(i == n-1){
   mn = abs(v[i-1]-v[i]);
   mx = abs(v[0]-v[i]);
  }
 cout << mn << ' ' << mx << endl;
 }
    }
}
