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
        int r1,r2,c1,c2,d1,d2;
        cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
        if((c1-r1+d2)%2) return cout << "-1",0;
        int c = (c1-r1+d2)/2;
        int b = d2 - c;
        int a = r1 - b ;
        int d = d1 - a;
        if(a > 9 || b > 9 || c > 9 || d > 9 
                || a < 1 || b < 1 || c < 1 || d < 1) return cout << "-1",0;
        vector <int> freq(10,0);
        freq[a]++;
        freq[b]++;
        freq[c]++;
        freq[d]++;
        for(auto &i:freq) if(i > 1) return cout << "-1",0;
        if(a+b == r1 && a+c == c1 && a+d == d1 && c+d == r2 && c+b == d2 && b+d == c2){
 
        // need to pass following conditions
        // not negative
        // no repeats
        // in range 1 - 9
 
        cout << a << ' ' << b << endl;
        cout << c << ' ' << d << endl;
        }
        else return cout << "-1" ,0;
    }
    Time
}
