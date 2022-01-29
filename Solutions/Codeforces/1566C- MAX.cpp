#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
//#define endl "\n"
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
//npm
int s (char a , char b){
    return (a-'0')+(b-'0');
}
thats_what_she_said // x  minutes 
    int T = 1;
    cin >> T;
    while(T--)
    {
        int n; cin >> n;
        int sum = 0;
        string a, b; cin >> a >> b;
        
        bool streakForZero = 0;
        bool streakForOne  = 0;
 
        for(int i = 0 ; i < n; i++){
            int hi = s(a[i],b[i]); 
            if(streakForZero && streakForOne){
                for(;;){}
                //cout << "a7a" << endl;
                //cout << flush;
                //return 0;
            }
 
            if(hi == 0){
                if(streakForZero){
                    sum+=2;
                    streakForZero = 0;
                }
                else{
                    if(streakForOne) sum+=1;
                    else
                        streakForOne = 1;
                }
            }
            else if(hi == 1){
                if(streakForOne){
                    sum+=3;
                    streakForOne = 0;
                }else if( streakForZero ){
                    sum+=2;
                    streakForZero = 0;
                }else{
                    sum+=2;
                }
            }
            else if(hi == 2){
                if(streakForOne){
                    sum+=2;
                    streakForOne = 0;
                }else{
                    streakForZero = 1;
                }
            }
            //cout <<"i: " << i <<"\tsum: " << sum << endl;
        }
        if(streakForOne)sum+=1;
 
        cout << sum << endl;
    }
    Time
}
 
 
 
/*
 
            if(hi == 1){
                sum+=2;
                streak = 0;
            }else if(hi == 0){
                if(streak){
                    sum+=2;
                    streak = 0;
                }else{
                    sum+=1;
                }
            }else
                streak = 1;
*/
