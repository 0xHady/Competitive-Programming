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
const ll sz = (ull)1e6+(ull)100;
int dk[sz];
void hi(int s){
 for(int i = 1; i <= s; i++)
  for(int j = i ; j <=s; j+=i)
   dk[j]++;
}
   
/*
int dk[sz];
bool once[sz];
ull d(int x){
 ull res = 0;
 for(int i = 1 ; i <=x ; i++) if(x%i==0) res++;
 return res;
}
void hi(int s){
 for(int i = 0 ; i <= s ; i++)
  dk[i] = d(i);
}
*/
 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {  
 ull ans = 0;
 ull a , b ,c ; cin >> a >> b >> c;
 hi(a*b*c);
 for(int i = 1 ; i <= a ; i++)
  for(int j  = 1 ; j <= b ; j++)
   for(int k = 1 ; k <= c ; k++)
    ans += (dk[i*j*k]%(ull)2e30); 
 cout << ans;
    }
}
