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
#define debug(x) cerr << #x << ": " << (x) << "\n";
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
template <class T, class U> T GCD (T a, U b) {return (!b ? a : GCD(b, a%b));}
template <class T, class U> T LCM (T a, U b) {return ((a/GCD(a, b)) * b);}
template <class T> bool isSquare (T n) {T sq = sqrt(n);  return (sq*sq)==n;}
pair<int,int> DIREC[4] = {{0,-1},{0,1},{1,0},{-1,0}};
void donothing(){return;}
//freopen("output.txt","w",stdout); 
 
vector <int> BFS(int n,vector <vector <int>> & edges){
    vector <int> dist(n+1,-1);
    dist[n] =0;
 
    queue <int> q;
    q.push(n);
 
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        int cost = dist[node];
        for(auto child:edges[node]){
            if(dist[child] != -1 ) continue;
            //debug(child);
 
            dist[child] = cost+1;
            q.push(child);
        }
    }
    return dist;
    
}
 
 
// NBMS
thats_what_she_said // x  minutes 
    freopen("jumping.in","r",stdin); 
    int T = 1;
    cin >> T;
    while(T--)
    {
        int n; cin >> n;
        vector <vector <int>> edges(n+1);
        for(int i = 1 ; i <= n; i++){
            int di; cin >> di;
            //وه
            if(i+di <= n) edges[i+di].pb(i);
            if(i-di >= 1) edges[i-di].pb(i);
        }
        vector <int> res = BFS(n,edges);
 
        for(int i = 1 ; i <= n ; i++) cout << res[i] << endl;
    }
 
    Time
}
