#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<int> vint;
void donothing(){return;}
#define PQ priority_queue
const ll MOD = 1000000007;
typedef pair<int,int> pint;
typedef vector<pint> vpint;
const double PI = acos(-1);
typedef vector <long long> vll;
#define all(n) n.begin(),n.end()
#define nope cout << "NO" << endl;
#define yup cout << "YES" << endl;
#define impo cout << "-1" << endl;
typedef unsigned long long int ull;
#define rall(n) n.rbegin(),n.rend()
#define sz(xxxf) (int)(xxxf.size())
#define rep(x) for(int dffdk=0;dffdk<x;dffdk++)
#define log4j(hkjl) cout << hkjl << endl
#define READ(FILE) freopen(FILE,"r",stdin);
#define mem(a, x) memset(a , x , sizeof(a))
#define tk(x) for(auto &zeko:x) cin >> zeko;
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define WRITE(FILE) freopen(FILE,"w",stdout);
#define debug(x) cerr << #x << ": " << (x) << endl;
#define print_vec(v) for(auto &zkksd:v) cout << zkksd << ' ' ;
//double nCr(int n, int k){return 1/((n+1)*std::beta(n-k+1,k+1));} //17
template <class T> T myceil(T a,T b){return ((a/b)+((a%b)!=0));}
template <class T> bool isSquare (T n) {T sq = sqrt(n);  return (sq*sq)==n;}
template <class T, class U> T GCD (T a, U b) {return (!b ? a : GCD(b, a%b));}
template <class T, class U> T LCM (T a, U b) {return ( (a / GCD(a, b) ) * b);}
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
template <class T> void MAKE_UNIQUE(T &x){sort(all(x));x.resize(distance(x.begin(),unique(all(x))));}
template <class T> T ecDst(T x1, T x2, T y1, T y2){ return pow((double)x2-x1,2.0)+(pow((double)y2-y1,2.0)); }
/*
 * x minutes
 */
//hey
void solve(){
    ll n; cin >> n; 
    vector <ll> res;
    vector <pair<ll,ll>> v(n+1);
    ll sum =0;
    
    for(int i = 1;i <= n; i++){ 
        ll t; cin >> t;
        v[i] = {t,i};
        sum+=t ; 
    }
    sort(all(v));
    ll lst = v[n].F*2;
 
    for(int i= 1 ;i < n; i++){
        ll target = sum-v[i].F;
 
        if(target == lst) 
            res.pb(v[i].S);
    }
 
    if(sum-v[n].F == v[n-1].F*2) 
        res.pb(v[n].S);
 
 
    log4j(sz(res));
    print_vec(res);
}
 
 
/**/thats_what_she_said/**/
    int TC = 1;
    //cin >> TC;
    while(TC--)
        solve();
    Time
}
 
