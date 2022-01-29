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
        string a,b;
        int n,zeros = 0,ones = 0, j = 0; cin >> n;
        cin >> a >> b;
        vector <pair<int,int>> v;
 
        for(int i = 0 ; i < n ; i++){
            if(a[i] == '0') zeros++;
            else ones++;
            if(zeros == ones){
                v.pb({j,i});
                j = i+1;
            }
        }
 
        for(auto x:v)
            if(a[x.first] == b[x.first]) continue;
            else{
                for(int i = x.first; i <= x.second ; i++)
                    if(a[i] == '1') a[i] = '0';
                    else a[i] = '1';
                
            }
 
        bool yay = 1;
        for(int i  = 0 ; i < n ;i++)
            if(a[i] != b[i]){
                yay = 0;
                break;
            }
        
        if(yay) yup else nope
            
 
 
    }
    Time
}
