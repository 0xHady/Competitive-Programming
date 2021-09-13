#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x  minutes 
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    int T = 1;
    //cin >> T;
    while(T--)
    {  
 int n; cin >> n;
 vector <pair<int,int>> v(2*n);
 vector <pair<int,int>> res;
 for(int i= 0 ; i < 2*n ; i++) cin >> v[i].first, v[i].second = i+1;
 sort(all(v));
 for(int i =0 ; i+1 < 2*n ; i+=2){
  if(v[i].first == v[i+1].first)
   res.push_back({ v[i].second ,v[i+1].second});
  else
   {cout << -1 << endl; return 0;}
 }
 for(auto x:res) cout << x.first << ' ' << x.second << endl;
    }
}
