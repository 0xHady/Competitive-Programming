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
 int n,t,tt,res = 0 ; cin >> n;
 bool fe= 0 , se = 0; 
 bool dif = 0;
 for(int i = 0 ; i < n; i++){
  cin >> t >> tt,
  t%2!=0 ? fe=!fe: fe=fe,
  tt%2!=0 ? se=!se: se=se;
  if(se+fe ==1) dif = 1;
 }
 if( fe+se == 1) cout << -1;
 else if(!fe && !se) cout << 0;
 else{if(dif)cout << 1; else cout << -1;}
 
 
    }
}
