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
typedef pair<int,int> pint;
typedef vector<pint> vpint;
//const double PI = acos(-1);
#define infinite_loop for(;;){}
#define all(n) n.begin(),n.end()
#define nope cout << "NO" << endl;
#define yup cout << "YES" << endl;
#define impo cout << "-1" << endl;
typedef unsigned long long int ull;
#define rall(n) n.rbegin(),n.rend()
#define sz(xxxf) (int)(xxxf.size())
#define log4j(hkjl) cout << hkjl << endl
#define READ(FILE) freopen(FILE,"r",stdin);
#define mem(a, x) memset(a , x , sizeof(a))
#define tk(x) for(auto &zbZB:x) cin >> zbZB;
//#define Num_of_Digits(n) ((ll)log10(n) + 1)
#define WRITE(FILE) freopen(FILE,"w",stdout);
#define rep(x) for(int dffdk=0;dffdk<x;dffdk++)
#define debug(x) cerr << #x << ": " << (x) << endl;
#define tkVofN int n; cin >> n; vi v(n); tk(v)
//#define MN_PQ_INT priority_queue<int,vi,greater<int>>
//#define MN_PQ_PINT priority_queue <pint,vpint,greater<pint>>
#define print_vec(v) for(auto &zkksd:v) cout << zkksd << ' ' ;
//template <class T> T myceil(T a,T b){return ((a/b)+((a%b)!=0));}
//double nCr(int n, int k){return 1/((n+1)*std::beta(n-k+1,k+1));} // C++17
//template <class T> bool isSquare (T n) {T sq = sqrt(n);  return (sq*sq)==n;}
//template <class T, class U> T GCD (T a, U b) {return (!b ? a : GCD(b, a%b));}
//template <class T, class U> T LCM (T a, U b) {return ( (a / GCD(a, b) ) * b);}
//string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
//string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define thats_what_she_said signed main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//template <class T> void MAKE_UNIQUE(T &x){sort(all(x));x.resize(distance(x.begin(),unique(all(x))));}
//template <class T> T ecDst(T x1, T x2, T y1, T y2){ return pow((double)x2-x1,2.0)+(pow((double)y2-y1,2.0)); }
// use shift operator instead of pow(2,x)
// dont't use pow أصلا
const int N = 2e6+100;
void pre(){
    //dp goes brrrr
}
//hey
//13hours
// UVA 11413 FILL THE CONTAINTER
bool can(vi &v , int x,int m){
    ll cur = 0;
    ll tot = 0;
   for(auto &i:v){
       if(i > x) return false;

       if(cur + i  > x) cur = 0; 

       tot +=(cur == 0);

       cur += i;
   }
    return tot <= m;
}

void whatisthefuckingresult(vi &v,int ans){
    ll cur = 0;
    ll res = -1;
    for(auto &i:v){
        cur+=i;
        if(cur >= ans){
            res = max(res,cur);
            cur =0 ;
        }
    }
    cout << res << endl;
}

void solve(int n,int m){
    vi v(n);
    ll sum = 0;
    for(auto &i:v){
        cin >> i;
        sum += i;
    }

    // we don't need this
    //sort(all(v));
    // it's enough that the "can" function is 
    // monotonic, it's all we need 
    // the array itself doesn't need to be sorted here
    
    int l = 1 , r = sum; 
    int ans = -1;

    while(l <= r){
        int mid = (l+r) >> 1;
        
        //cerr << l << ' ' << r << ' ' << mid  << endl;
        if(can(v,mid,m)) ans = mid, r = mid - 1;
        else l = mid + 1;
    }
    //debug(ans);
    cout << ans << endl;
    //whatisthefuckingresult(v,ans);
}

/**/thats_what_she_said/**/
    pre();
    int TC = 1;
    //READ("kosomUVA");
    //WRITE("out");
    //cin >> TC;
    int n,m;
    while(cin >> n >> m){
        solve(n,m);
    }
    //Time
}
