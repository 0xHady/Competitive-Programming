#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
using namespace std;
// NBMS
thats_what_she_said // x  minutes 
    int T = 1;
    cin >> T;
    while(T--)
    {
        double n,x; cin >> n;
        double mx = -2e9, sum = 0;
        for(int i = 0 ; i < n ; i++)cin >> x , sum+=x, mx = max(mx,x);
        cout << fixed<< setprecision(9) << mx + (sum - mx)/(n-1) << endl;
    }
}
