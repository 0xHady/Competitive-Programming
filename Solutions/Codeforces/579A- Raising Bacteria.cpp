#include <bits/stdc++.h>
using ll = long long ;
using ull = unsigned long long ;
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
 
using namespace std;
 
int main()
{
    Hello_World
    // letMeIn
    // USACO("mowing")
 
    ll n;
    cin>>n;
    int count = 0 ;
 
    while(n != 0)
    {
        count += n%2;
        n/=2;
 
    }
    cout<<count;
 
}
