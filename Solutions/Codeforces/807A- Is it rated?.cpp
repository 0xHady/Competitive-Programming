#include <bits/stdc++.h>
using namespace std;
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
#define lzeros(mask) __builtin_clz(mask) // no of leading zeros
#define tzeros(mask) __builtin_ctz(mask) // no of trailing zeros
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
#define endl "\n"
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n; cin >> n;
        bool a =0 , b = 0;
        vector <int> v(n);
        bool unrated = 0;
        int after ;
        cin >> v[0] >> after;
            if( v[0] != after ){
                cout << "rated" << endl;
                return 0;
            } 
        for(int i = 1 ; i < n; i++){
            cin >> v[i]  >> after;
            if(v[i] != after ){
                cout << "rated" << endl;
                return 0;
            } 
            if(v[i] > v[i-1]) unrated = true;
        }
        if(unrated) cout << "unrated" << endl;
        else cout << "maybe" << endl;
    }
}
