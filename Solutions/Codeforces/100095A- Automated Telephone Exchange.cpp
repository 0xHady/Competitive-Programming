#include <bits/stdc++.h>
using namespace std;
void fast(){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
const int N = 1e5 + 5;
#define ll long long
#define ull unsigned long long
#define ld long double
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define SZ(x) x.size()
#define fr first
#define sc second
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define popf pop_front()
#define popb pop_back()
#define pi pair<int,int>
#define pl pair<ll,ll>
#define pd pair<double,double>
#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vd vector<double>
#define vs vector<string>
#define vpi vector<pi>
#define vpl vector<pl>
#define vpd vector<pd>
#define MP make_pair
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define lb lower_bound
#define ub upper_bound
 
int main() {
    fast();
    freopen("ate.in","r", stdin);
    freopen("ate.out","w", stdout);
 
    int n; cin >> n;
    int ans  = 0;
    if(n > 198) {cout << 0; return 0;}
    for(int i = 0 ; i <= 99 ; i++)
        for(int j = 0; j <= 99; j++)
            if(i +j == n)
                ans++;
 
            cout << ans ;
    return 0;
}
