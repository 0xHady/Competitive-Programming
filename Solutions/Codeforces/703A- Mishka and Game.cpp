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
vector <vector<int>> adj;
bool vis[300001];
vector <int> res;
 
void bfs(int x){
    queue <int> q;
    q.push(x);
    while(!q.empty()){
        int e =  q.front();
        q.pop();
        vis[e] = 1;
        for(int i = 1  ;i < adj[e].size() ; i++){
            if(vis[adj[e][i]]) res.pb(adj[e][i]);
            else q.push(adj[e][i]);
            cerr << "hi: " << adj[e][i] << ' ';
        }
    }
 
}
thats_what_she_said // x  minutes 
    int T = 0;
    //cin >> T;
    while(T--)
    {
        int n,k,d; cin >> n >> k >> d;
        adj.resize(n+1);
        for(int i = 0 ; i < n ; i++){
            int a , b; cin >> a >> b;
            adj[a].pb(b);
        }
        cout << res.size() << endl;
        for(auto i:res) cout << i << endl;
    }
    int n; cin >> n;
    int m = 0 , c = 0;
    while(n--){
        int a ,b; cin >> a >> b;
        if(a > b ) m++;
        else if( a < b ) c++;
    }
    if(m > c) cout << "Mishka";
    else if( m < c ) cout << "Chris";
    else cout << "Friendship is magic!^^" ;
    Time
}