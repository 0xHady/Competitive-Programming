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
int dist(int a , int b){
 if(a < 0) return  (a*-1) + b;
 else return (b-a); 
}
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {  
 int n; cin >> n;
 vector <int> v(n);
 for(auto &x:v) cin >> x;
 sort(rall(v));
 int sup  = n;
 ull ans = 0;
 for(int i = 0 ; i < n; i++,sup--)
  if(v[i] != sup){
   ans += dist(min(sup,v[i]),max(sup,v[i]));
   v[i] = sup;
  }
 cout << ans << endl;
    }
}
