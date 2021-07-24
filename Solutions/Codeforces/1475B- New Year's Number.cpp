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
#define pb push_back
 
using namespace std;
 
int main()
{
    Hello_World
    // letMeIn
    // USACO("herding")
 
    int t;
    cin>>t;
    while(t--){
        bool res = 0 ;
 
        ll n;
        cin>>n;
        int ts =n/2020;
        int t1s = n/2021;
 
    for(int i = 0 ; i <= ts ; i++)
        for(int j= 0 ; j<= t1s ; j++){
            if((i*2020) + (j*2021) == n){
                res = 1;
                break;
            }
            if(res)break;
        }
 
        if(res)
            yup
        else 
            nope
 
 
    }
    
 
    
 
 
    
}
