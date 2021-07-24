#include <bits/stdc++.h>
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
using ll = long long ;
using ull = unsigned long long ; 
 
#define sortv(v) sort(v.begin(),v.end())
#define revv(v) reverse(v.begin(),v.end())
#define rep(x) for(int xzcv5423 = 0 ; xzcv5423 < x ; xzcv5423++)
 
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back         //partial sum ----> search  ----  accumulate ----> search
#define endl "\n"
 
using namespace std;
 
int main()
{
    Hello_World
    ll n,m;
    cin >> n >> m;
    ll arr[n+1];
    ll letters[m];
    arr[0] = 0;
    for( int i = 1 ; i <= n ; i++){
        cin >> arr[i];
        arr[i]+= arr[i-1];
    }
    
    for( int i = 0 ; i < m ; i++){
        ll a; 
        cin >> a;
 
        int pos = lower_bound(arr, arr+n+1, a) - arr;  // 10 25 37              23
        cout << pos << " " << a-arr[pos-1] << endl;
        
        
 
    }
 
}
