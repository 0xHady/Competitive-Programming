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
#define nopos string::npos
 
using namespace std;
 
int main()
{
    Hello_World
    // letMeIn
    // USACO("mowing")
    ll n;
    cin>>n;
    ll people[n];
    n*=2;
    ll pizza[n];
    for(int i= 0 ; i< n ; i++)
        cin>>pizza[i];
    sort(pizza,pizza+n);
 
    for(int i = 0 ; i < n/2 ; i++)
        people[i] = pizza[i]+pizza[n-i-1];
    sort(people,people+(n/2));
    cout<<abs(people[0] - people[(n/2)-1]);
}
