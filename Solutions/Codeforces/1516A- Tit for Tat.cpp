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
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define debug(x) cerr << #x << ": " << (x) << endl;
#define lzeros(mask) __builtin_clz(mask) // no of leading zeros
#define tzeros(mask) __builtin_ctz(mask) // no of trailing zeros
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
template <class T, class U> T GCD (T a, U b) {return (!b ? a : GCD(b, a%b));}
template <class T, class U> T LCM (T a, U b) {return ((a/GCD(a, b)) * b);}
template <class T> bool isSquare (T n) {T sq = sqrt(n);  return (sq*sq)==n;}
pair<int,int> DIREC[4] = {{0,-1},{0,1},{1,0},{-1,0}};
void donothing(){return;}
//freopen("output.txt","w",stdout); 
 
void solve(){
    int n ,k;  cin >> n >>k;
    vector <int> v(n); 
    for(auto &i:v) cin >> i ;
 
    for(int i= 0 ; i < n-1; i++){
        if(!k) break;
        if(!v[i]) continue;
 
        if(v[i] <= k){
            v[n-1]+=v[i];
            k-=v[i];
            v[i] =0; 
        }else{
            v[n-1]+=k;
            v[i]-=k;
            k = 0 ;
        }
    }
 
    for(auto &i:v) cout << i << ' ';
    cout << endl;
}
 
thats_what_she_said // x  minutes 
    //freopen("jumping.in","r",stdin); 
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }
 
    Time
}
