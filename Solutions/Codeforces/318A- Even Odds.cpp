#include <bits/stdc++.h>
#define ll long long 
#define Hello_World ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{
    Hello_World
    
    ll a,b;
    cin>>a>>b;
    b--;
    ll mid;
    ll res;
    // if(a%2 == 0)
        mid = ((a-1)/2);
    // else   
    //     mid=((a-1)/2);
 
    if(b <= mid )
        res=(b*2)+1;
    else   
        res = (b-mid)*2;
 
    cout<<res;
 
        
}
