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
//npm
thats_what_she_said // x  minutes 
    int T = 1;
    cin >> T;
    while(T--)
    {
       string a; cin >> a;
       int sum = 0 ; 
       bool streak = 0;
        
       for(int i =0 ; i <= a.size() ; i++){
            if(a[i] == '1' && streak){
                streak = 0;
            }else if(a[i] == '0' && !streak){
                sum++;
                streak = 1;
            } 
       } 
       cout << min(sum,2) << endl;
    }
    Time
}
