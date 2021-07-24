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
#define revv(v) reverse(v.begin(),v.end())
#define rep(x) for(int xzcv5423 = 0 ; xzcv5423 < x ; xzcv5423++)
 
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
ll deadMonsters = 0;
 
// return true if the hero is dead
bool fight(ll a, ll &b, ll ai, ll bi){
    ll fights = bi/a ;
    if(bi%a != 0)
        fights++;
    
    if((b - (fights-1)*ai) >= 1)
        deadMonsters++;
 
    b = b - fights*ai;
    // bi = bi -fights*a;
    // cout<<"b: "<<b<<"\tbi: "<<bi<<endl;
 
 
    return b <= 0;
    
}
 
int main() 
{
    Hello_World
    // letMeIn
    // USACO("cowtip")
 
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,n;                cin>>a>>b>>n;
        ll ai[n], bi[n];
        for(ll i = 0 ; i < n ; i++)   cin>>ai[i];
        for(ll i = 0 ; i < n ; i++)   cin>>bi[i];
 
        vector<pair<ll,ll>>v(n);
        for(ll i = 0 ; i < n ; i++)
            v[i] = {ai[i],bi[i]};
        sortv(v);
 
        deadMonsters = 0;
        for(ll i = 0 ; i < n ; i++)
        {
            if(fight(a,b,v[i].F,v[i].S))
            {
                break;
            }
        }
 
        if(deadMonsters == n) yup
        else nope
 
    }
 
}
