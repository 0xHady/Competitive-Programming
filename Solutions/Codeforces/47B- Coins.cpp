#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
const int mod = 1e9 + 7;
const double PI = acos(-1);
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
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
template <class T, class U> T GCD (T a, U b) {return (!b ? a : GCD(b, a%b));}
template <class T, class U> T LCM (T a, U b) {return ((a/GCD(a, b)) * b);}
template <class T> bool isSquare (T n) {T sq = sqrt(n);  return (sq*sq)==n;}
pair<int,int> DIREC[4] = {{0,-1},{0,1},{1,0},{-1,0}};
ll myceil(ll a,ll b){return ((a/b)+((a%b)!=0));}
const ll MOD = 1000000007;
void donothing(){return;}
//freopen("output.txt","w",stdout); 
thats_what_she_said // x minutes 
    //freopen("jumping.in","r",stdin); 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        vector <pair<int,char>> v(3);
        v = {{0,'A'},{0,'B'},{0,'C'}};
 
        for(int i = 0 ; i < 3 ;i++){
            string s; cin >> s;
            if(s[1] == '<') swap(s[0],s[2]);
 
            v[s[0]-'A'].F++;
            v[s[2]-'A'].F--;
 
        }
        sort(all(v));
        bool a,b,c; a=b=c=0;
        for(auto &i:v){ 
            if(i.F == 2)a = 1;
            else if(i.F == 0) b =1;
            else if(i.F == -2) c = 1;
        }
        if(a&&b&&c)
        for(auto &i:v) cout << i.S;
        else cout << "Impossible";
        
    }
    Time
}
