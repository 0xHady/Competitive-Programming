#include <bits/stdc++.h>
 
using ll = long long ;
using ull = unsigned long long ;
#define pint  pair<int,int>
#define vint  vector <int> 
#define vpint  vector <pair<int,int>> 
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define sortv(v) sort(v.begin(),v.end())
 
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
int main() 
{
    Hello_World
    // letMeIn
    // USACO("cowtip")
 
    map <ll,ll> mp;
    ll n;
    cin>>n;
 
    ll mx = -1 , mn = INT_MAX;
    for(ll i = 0 ;i < n ; i++){
        ll t;
        cin>>t;
        mp[t]++;
        mx = max(mx,t);
        mn = min(mn,t);
    }
 
    ll res = 0;
    for(auto it:mp){
        if(it.first == mn || it.first == mx)
            continue;
        res+=it.second;
    }
 
    cout<<res;
 
    
}
