#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pint;
const int mod = 1e9 + 7;
const double PI = acos(-1);
#define sz(xxxf) (int)(xxxf.size())
#define all(n) n.begin(),n.end()
#define nope cout << "NO" << endl;
#define yup cout << "YES" << endl;
typedef unsigned long long int ull;
#define rall(n) n.rbegin(),n.rend()
#define mem(a, x) memset(a , x , sizeof(a))
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define debug(x) cerr << #x << ": " << (x) << endl;
#define lzeros(mask) __builtin_clz(mask) // no of leading zeros
#define print_vec(v) for(auto &zkksd:v) cout << zkksd << ' ' ;
#define tzeros(mask) __builtin_ctz(mask) // no of trailing zeros
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define tk(x) for(auto &zeko:x) cin >> zeko;
#define log(hkjl) cout << hkjl << endl
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
template <class T, class U> T GCD (T a, U b) {return (!b ? a : GCD(b, a%b));}
template <class T, class U> T LCM (T a, U b) {return ((a/GCD(a, b)) * b);}
template <class T> bool isSquare (T n) {T sq = sqrt(n);  return (sq*sq)==n;}
template <class T> T ecDst(T x1, T x2, T y1, T y2){ return pow((double)x2-x1,2.0)+(pow((double)y2-y1,2.0)); }
pair<int,int> DIREC[4] = {{0,-1},{0,1},{1,0},{-1,0}};
ll myceil(ll a,ll b){return ((a/b)+((a%b)!=0));}
const ll MOD = 1000000007;
void donothing(){return;}
//freopen("output.txt","w",stdout); 
bool exist[30];
bool notreachable[30];
thats_what_she_said // x minutes 
    //freopen("jumping.in","r",stdin); 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        char inp; int n,m,x; cin >> n >> m >> x;
        map <char,vector<pair<int,int>>> mp;
        set <char> st;
        vector <pint> shiftKeys;
 
        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < m ; j++){
                cin >> inp;
                if(inp == 'S'){ shiftKeys.pb({i,j}); continue; }
                mp[inp].pb({i,j}); 
                exist[inp-'a'] = true;
                st.insert(inp);
            }
        }
 
        // special thanks to coach Moaz for being awesome :)
        // كل الحب
        for(auto &i: st){
            int mn = INT_MAX;
            for(auto &j:shiftKeys)
                for(auto &k:mp[i])
                    mn = min(mn, ecDst(k.F,j.F,k.S,j.S));
 
            
            if(mn > x*x) notreachable[i-'a'] = true;
        }
 
 
        int fsdfs,res =0; string t; cin >> fsdfs >> t;
 
        for(auto &i:t){
            if(!exist[tolower(i)-'a']) return cout << -1,0;
            if(islower(i)) continue;
            if(shiftKeys.size() == 0) return cout << -1, 0;
 
            res+= notreachable[tolower(i)-'a'];
        }
        log(res);
    }
    Time
}
