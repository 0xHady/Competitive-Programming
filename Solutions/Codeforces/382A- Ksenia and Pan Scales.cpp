#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define pb push_back
#define ll long long 
#define nope cout << "NO" << endl;
#define yup cout << "YES" << endl;
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
string b;
int d = 0 ;
void addShit(int quantity, string &s){
    while(quantity--)
        s+=b[d++];
}
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        string a ;
        cin >> a >> b;
        if((a.size() -1 + b.size() ) %2) {cout << "Impossible" ; return 0;}
 
        bool left = 1;
        string lhs = "", rhs = "";
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] == '|'){ left = 0;  continue;}
            if(left) lhs+=a[i];
            else rhs+=a[i];
        }
 
        int dif = abs((int)lhs.size() - (int)rhs.size());
        if((b.size() - dif)%2 || b.size() < dif) {cout << "Impossible"; return 0;}
 
        if(lhs.size() < rhs.size()) addShit(dif,lhs);
        else if(rhs.size() <  lhs.size()) addShit(dif,rhs);
 
        if(d<b.size()) { addShit((b.size()-dif)/2,rhs); addShit((b.size()-dif)/2,lhs);}
        
        cout << lhs << "|" << rhs << endl;
 
        if(d !=b.size()) cout << "a7a error";
 
        
    }
    Time
}
