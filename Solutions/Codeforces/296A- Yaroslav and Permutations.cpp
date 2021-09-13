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
// NBMS
thats_what_she_said // x  minutes 
    int n; cin >> n;
    int mx = -1;
    map <int, int >mp;
    for(int i = 0 ; i < n; i++){
        int t; cin >> t;
        mp[t]++;
        mx = max(mx,mp[t]);
    }
    if(mx <= ceil((float)n/2)) yup
    else nope
}
