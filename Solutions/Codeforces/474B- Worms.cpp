#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define ll long long 
#define pb push_back
typedef vector<int> vi;
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
#define debug(x) cerr << #x << ": " << (x) << "\n";
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
template <class T, class U> T GCD (T a, U b) {return (!b ? a : GCD(b, a%b));}
template <class T, class U> T LCM (T a, U b) {return ((a/GCD(a, b)) * b);}
template <class T> bool isSquare (T n) {T sq = sqrt(n);  return (sq*sq)==n;}
pair<int,int> DIREC[4] = {{0,-1},{0,1},{1,0},{-1,0}};
void donothing(){return;}
//freopen("output.txt","w",stdout); 
 
int lowerbound(int lo,int hi, int target,vector <int> &a){
    while(lo < hi){
        int mid = (lo+hi)/2;
        if(a[mid] >= target) hi = mid;
        else lo = mid+1;
    }
    return (a[lo] >= target ? lo: -1);
}
thats_what_she_said // x  minutes 
    //freopen("jumping.in","r",stdin); 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n; cin >> n;
        vector <int> ai(n+1);
        ai[0] = 0;
        for(int i = 1 ;i <= n; i++){
            int t; cin >> t;
            ai[i] = ai[i-1]+t;
        }
        int m; cin >> m;
        for(int i = 0 ; i < m ; i++){
            int t; cin >> t;
            cout << lowerbound(1,n,t,ai) << endl;
 
        }
 
        
        
    }
 
    Time
}
