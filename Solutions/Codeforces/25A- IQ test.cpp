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
const int N = 2e6;
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n,t; cin >> n;
        int even = -1, odd = -1;
        bool reseven ;
        for(int i = 0 ; i < n; i++){
            cin >> t;
            if(t%2 ==0 ){if(even == -1) even = i+1; else reseven = 0;}
            else 
            {if(odd == -1) odd = i+1; else reseven = 1;}
 
        }
        if(reseven)cout << even ;
        else cout << odd;
    }
}
