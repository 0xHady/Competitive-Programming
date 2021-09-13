#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define pb push_back
#define F first
#define S second
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
using namespace std;
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n,k; cin >> n >> k;
        map <int,vector<int>, greater<int>> mp;
        map <pair<int,int>,int> occ;
        for(int i= 0 ; i < n; i++){
            int p,t; cin >> p >> t;
            mp[p].pb(t);
            occ[{p,t}]++;
        }
        int cur = 1;
        for(auto x:mp){
            sort(all(x.S));
            for(int i = 0 ; i < x.S.size() ; i++){
                if(cur == k){
                    cout << occ[{x.F,x.S[i]}];
                    return 0;
                }
                cur++;
            }
        }
    }
}
