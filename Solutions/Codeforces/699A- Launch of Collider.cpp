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
pair<int,int> DIREC[4] = {{0,-1},{0,1},{1,0},{-1,0}};
void donothing(){return;}
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
char grid[200][200];
char x;
 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n, res = -1; cin >> n;
        string s; cin >> s;
        int arr[n];
        for(int  i = 0 ; i < n; i++) cin >> arr[i];
        bool needLe = 0;
        bool ok = 0 ; 
        for(int i = 0 ; i < n-1; i++){
            if(s[i] == 'R' && s[i+1] == 'L'){
                cerr <<"i: " << i << endl;;;;;
                res = ((res == -1) ? (arr[i+1]-arr[i])/2 : min(res,(arr[i+1]-arr[i])/2));
            }
        }
        cout << res << endl;
 
    }
    Time
}
