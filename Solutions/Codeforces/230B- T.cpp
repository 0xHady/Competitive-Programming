#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define ll long long 
#define pb push_back
#define pi 3.14159265359
#define all(n) n.begin(),n.end()
#define nope cout << "NO" << endl;
#define yup cout << "YES" << endl;
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
 
bitset<10000010>bs;
ll sieve_size;
 
void sieve(ll upperbound){
    sieve_size = upperbound+1;
    bs.set();
    bs[0] = bs[1] = 0;
    
    for(ll i = 2 ; i <= sieve_size;i++)
        if(bs[i])
            for(ll j = i*i ; j <= sieve_size; j+=i)
                bs[j] = 0;
 
}
 
thats_what_she_said // x  minutes 
    int T = 1;
    cin >> T;
    sieve(10000000);
    while(T--)
    {
        ull x; cin >> x;
        double sqr = sqrt(x);
        ll lsq = sqr;
        if(lsq == sqr && bs[lsq]) yup else nope
 
    }
    Time
}
