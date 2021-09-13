#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
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
ll n,k ;
vector <ll> need,have;
bool can(ll x, ll k){
    for(int i = 0 ; i < n; i++){
        if(x *need[i] > have[i]){
            if(have[i] +k >= x * need[i]) k-= abs( (need[i]*x) - have[i]); 
            else return 0;
        }
    }
    return true;
}
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        cin >> n >> k;
 
        have.resize(n);
        need.resize(n);
        for(auto &x:need) cin >> x;
        for(auto &x:have) cin >> x;
 
        ll lo = 0, hi = 2e9,mid ;
        while(lo < hi){
            mid = (lo +hi +1)/2;
            if(can(mid,k)) lo = mid;
            else hi = mid-1;
        }
       cout << hi << endl;
 
 
 
    }
    Time
}
