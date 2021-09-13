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
    while(T--)
    {
        int n,k; cin >> n >> k;
        int pref[n+1];
        pref[0] = 0;
        for (int i = 1 ; i <= n ; i++){
            int t; cin >> t;
            pref[i] = t + pref[i-1];
        }
        int  mn  = INT_MAX;
        int ans;
        for(int i = k ; i <=n ; i++){
            if(pref[i] - pref[i-k] < mn){
                mn = pref[i] - pref[i-k];
                ans = i -k +1;
            }
        }
        cout << ans << endl;
    }
}
