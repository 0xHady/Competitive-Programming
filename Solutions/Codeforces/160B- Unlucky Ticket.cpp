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
        int n; cin >> n;
        string a="",b="";
        for(int i = 0 ; i < n; i++){char t; cin >> t; a+=t;}
        for(int i = 0 ; i < n; i++){char t; cin >> t; b+=t;}
        sort(all(a));
        sort(all(b));
        bool ans = 1;
 
        if(a[0] - '0' < b[0] - '0'){
            for(int i = 0; i < n; i++) if(a[i] - '0' >= b[i] - '0') ans = 0;
        }                
        else if(a[0] - '0' > b[0] - '0'){
            for(int i = 0; i < n; i++) if(a[i] - '0' <= b[i] - '0') ans = 0;
        }
 
        else ans = 0;
 
        ans? cout << "YES" : cout <<"NO";
 
    }
}
