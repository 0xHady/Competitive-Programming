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
thats_what_she_said // x  minutes 
    int T = 1;
    while(T--)
    {
        int y,k,n,i,c = 0; cin >> y >> k >> n;
        for(i = 1; i*k <= n; i++){
            if(i*k < y || i*k-y < 1) continue;
            cout << i*k - y << ' ' ;
            c++;
        }
        if(!c) cout << -1;
 
    }
}
