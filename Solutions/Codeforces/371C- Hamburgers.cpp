#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define ll long long 
//#define pb push_back
#define pi 3.14159265359
#define all(n) n.begin(),n.end()
#define nope cout << "NO" << endl;
#define yup cout << "YES" << endl;
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
pair<int,int> DIREC[4] = {{0,-1},{0,1},{1,0},{-1,0}};
void donothing(){return;}
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
string t; 
ll cb,cs,cc;  
ll b,s,c; 
ull pb,ps,pc; 
ull r; 
 
ull cost(ll x){
    ull bread = max(0LL,((x*cb) - b));
    ull saus = max(0LL,((x*cs) - s));
    ull chees = max(0LL,((x*cc) - c));
    return (bread*pb + saus*ps + chees*pc);
}
 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        
        cin >> t;
        cin >> b >> s >> c;
        cin >> pb >> ps >> pc;
        cin >> r;
 
        cb = cs = cc = 0;
        for(int i = 0 ; i < t.size() ; i++){
            if(t[i] == 'B') cb++;
            else if(t[i] == 'S') cs++;
            else cc++;
        }
 
        ull lo = 0 , hi =  r + (110*(pb+ps+pc));
 
        while(lo < hi){
            ll mid = ((lo + hi+1  ) / 2);
            //cerr << "lo ,hi , mid " << endl << lo << ' ' << hi << ' ' << mid << endl;
            ll costt = cost(mid);
 
            if(costt < r) lo = mid;
            else if(costt > r) hi = mid-1;
            else {
                cout << mid << endl;
                return 0;
            }
 
        }
        //cerr << "cost(200000000001):  " << cost(200000000001) << endl;
        //cerr << "r:  " << r << endl;
        cout << hi << endl;
 
 
 
 
 
    }
    Time
}
