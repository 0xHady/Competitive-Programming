#include <bits/stdc++.h>
using namespace std;
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define pb push_back
#define F first
#define S second
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define lzeros(mask) __builtin_clz(mask) // no of leading zeros
#define tzeros(mask) __builtin_ctz(mask) // no of trailing zeros
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
ll gcd(ll first, ll second) { return !second ? first : gcd(second, first % second); }
ll lcm(ll first, ll second) { return (first / gcd(first, second)) * second; }
#define endl "\n"
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        ll l , r;
        cin >> l >> r;
        if(l%2) l++;
        if(r-l >= 2) cout << l << ' ' << l+1 << ' ' << l+2 << endl;
        else cout << -1 << endl;
    }
    Time
}
