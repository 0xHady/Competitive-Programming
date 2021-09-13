#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define pb push_back
#define ll long long 
#define nope puts("NO"); 
#define yup puts("YES");
#define pi 3.14159265359
#define all(n) n.begin(),n.end()
#define ull unsigned long long int
#define rall(n) n.rbegin(),n.rend()
#define lzeros(mask) __builtin_clz(mask) // no of leading zeros
#define tzeros(mask) __builtin_ctz(mask) // no of trailing zeros
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
ll gcd(ll first, ll second) { return !second ? first : gcd(second, first % second); }
ll lcm(ll first, ll second) { return (first / gcd(first, second)) * second; }
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
bool balanced (string &s){
    int a  = 0 ;
    int b = 0 ;
    for(auto &x:s){
        if(x == 'a') a++;
        else b++;
    }
    return a==b;
}
thats_what_she_said //    x  minutes 
    int T = 1;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        string s;
        cin>> s;
        int subnum = 2*n -1;
        int i = n;
        bool ex = 0;
            for(int i = 1 ; i < n; i++){
                int  l = 0 , r = l+i;
                while(r < s.size()){
                    string t = "";
                    for(int j = l ; j <= r ; j++) t+=s[j];
                    if(balanced(t)){cout << l+1 << ' ' << r+1 << endl; ex = 1;break; } 
                    l++;
                    r = l+i;
                }
                if(ex)break;
            }
            if(ex) continue;
            cout << -1 << ' ' << -1 << endl;
    }
    Time
}
