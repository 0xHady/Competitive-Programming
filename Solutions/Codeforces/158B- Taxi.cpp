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
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
#define endl "\n"
const int N = 2e6;
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
vector <int> v;
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n,taxis = 0 , alr = 2,sum; cin >> n;
        v.resize(n); 
        for(auto &x:v) cin >> x;
        sort(rall(v));
        if(n == 1) {cout << 1 << endl; return 0;}
        //else if(n == 2){ if(v[0] + v[1] <= 4) cout << 1; else cout << 2; return 0;}
        int l = 0 , r = n -1 ; 
        sum = v[l] + v[r] ;
        while(l <= r ){
            if(l == r){taxis++; break;}
            
            if(sum <  4){ r--; sum += v[r]; alr++; }
            else if(sum == 4){  r--;l++; sum = v[r] + v[l]; taxis++; }
            else {
                l++;
                sum = v[r] + v[l];
                taxis++;
                alr++;
            }
        }
        //cout << "alr: " << alr << endl;
        //if(alr < n) taxis++;
        cout << taxis << endl;
    }
}
