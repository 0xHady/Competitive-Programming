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
        int n,k,d = 1 ; cin >> n >> k;
 vector <pair<int,int>> v(n);
 for(int i = 0 ; i < n ; i++) cin >> v[i].first, v[i].second = i;
 sort(all(v));
 for(int i = 1 ; i < n ; i++) if(v[i-1].second + 1 != v[i].second) d++;
 
 cout <<  (d <= k ? "Yes" : "No") << endl;
    }
}
