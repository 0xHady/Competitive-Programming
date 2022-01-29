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
 
vector <int> pfacts;
 
void fillPrimes(int n){
    for(int i = 2 ; i*i <= n ;i++){
        while(n%i == 0){
            n/=i;
            pfacts.pb(i);
        }
    }
    if(n != 1) pfacts.pb(n);
}
 
 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n , k,left = 1,i ; cin >> n >> k;
        fillPrimes(n);
 
        if(pfacts.size() < k) {cout << -1; return 0;}
 
        for(i =0 ; i< k-1 ; i++) cout << pfacts[i] << ' ';
 
        for( ; i < pfacts.size() ; i++) left *=pfacts[i];
 
        cout << left;
        
    }
    Time
}
