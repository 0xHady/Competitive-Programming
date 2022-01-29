#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
//#define endl "\n"
#define pb push_back
#define ll long long 
#define nope cout << "NO" << endl;
#define yup cout << "YES" << endl;
#define pi 3.14159265359
#define all(n) n.begin(),n.end()
#define ull unsigned long long int
#define rall(n) n.rbegin(),n.rend()
#define lzeros(mask) __builtin_clz(mask) // no of leading zeros
#define tzeros(mask) __builtin_ctz(mask) // no of trailing zeros
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
ll gcd(ll first, ll second) { return !second ? first : gcd(second, first % second); }
ll lcm(ll first, ll second) { return (first / gcd(first, second)) * second; }
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
ll v[100200],sv[100200];
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        ll n,m,a,l,r,t; cin >> n;
        for(int i = 1 ; i <= n;i++)
            cin >> t,
            v[i] = sv[i] = t;
 
        sort(sv+1,sv+n+1);
        for(int i = 1 ; i <= n;i++) 
            sv[i] +=sv[i-1], v[i] += v[i-1]; 
 
        cin >> m;
        while(m--){
            cin >> a >> l >> r;
 
            if(a == 1)
                cout <<v[r] - v[l-1]<< endl;
            else if(a == 2)
                cout <<sv[r] - sv[l-1]<< endl;
 
        }
 
    }
    Time
}
