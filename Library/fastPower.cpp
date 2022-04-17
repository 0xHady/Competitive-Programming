#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = (ll)1e7;



ll power(ll x,ll y){ 
    ll ans = 1;

    /*
     * when the power is odd
     * we should do power--;
     * but it's done automatically 
     * when we do power/=2
     * because of truncation
     * 10/2 == 5 and 11/=2  == 5 too
     */

    while(y){
        if(y%2) 
            ans = (ans*x)%mod;
        x = (x*x)%mod;
        y/=2;
    }
    return ans;
}


int main(){
    ll x  = 2 , y = 22;
    cout << power(x,y);
}
