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
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
const int N = 1e6+2;
vector <int> adj[N];
bitset<N> vis;
deque<int> dq;
 
ll aa, bb;
 
void dfs(ll a){
    if(a > bb) return;
    dq.pb(a);
 
    if(a == bb){
        yup
        cout << dq.size() << endl;
        for(auto x:dq)
            cout << x << ' ';
        exit(0);
    }
 
    dfs(a*2);
    dfs((a*10)+1);
    dq.pop_back();
}
 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        cin >> aa >> bb;
        dfs(aa);
        nope
        
    }
    Time
}
