#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x  minutes 
    int T = 1;
    int mn =INT_MAX, mx = -INT_MAX;
    int mxDist = -1;
    int ans;
    while(T--)
    {
        int n; cin >> n;
        for(int i = 0 ; i < n ;i++){
            int a, b;
            cin >> a >> b;
            mn = min(mn,min(a,b));
            mx = max(mx,max(a,b));
            if(b -a  >  mxDist){
                mxDist = b -a;
                ans = i+1;
            }
        }
        if(mxDist >= mx - mn) cout << ans;
        else cout << -1;
 
    }
}
