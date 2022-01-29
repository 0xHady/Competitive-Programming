#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
ll myceil(ll a,ll b){return ((1.0*a/b)+((a%b)!=0));}
ll x,y,res = 0,v,wanted,t,n;
thats_what_she_said // x minutes 
    cin >> x >>y ;
    if(x > y) swap(x,y);
    for(int i = 1; i <= x; i++){
        v = myceil(i,5)*5;
        wanted = (5-i%5)%5;
        t = y;
        if(t%5 != wanted){ 
            t = y-(y%5)+wanted;
            if(t > y)
                t = y - (y%5) - 5 + wanted;
        }
 
        n = myceil((t - (v-i) + 1),5); 
        if(!(v-i)) n = t/5;
            
        res += n;
    }
    cout << res;
}
