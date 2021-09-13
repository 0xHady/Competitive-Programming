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
int n;
char diag, other;
int l , r;
string s;
bool othersAreOthers(){
    for(int i = 0 ; i < s.size() ; i++){
        if(i == l || i == r) continue;
        if(s[i] != other)
            return false;
    }
    return true;
}
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        cin >> n;
        l = 0 ; r  = n-1;
        bool f = 1; 
        for(int i =0 ; i < n ;i++){
            cin >> s;
            if(f){diag = s[0]; other = s[1]; f = 0;if(diag ==  other) {nope return 0;}}
            if(!( s[l] == s[r] && s[l] == diag && othersAreOthers() )){
                nope
                return 0;
            } 
            l++; r--;
        }
        yup
    }
}
