#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl "\n"
#define ll long long 
#define pb push_back
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
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n; cin >> n;
        string s; cin >> s; s+=".";
        bool arr[s.size() + 10]{};
        int start = -1,end = -1;
        bool f = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '.'){arr[i] = 1; continue;}
            if(s[i] != '.' && !f){start = i; f = 1;}
            if(s[i] == 'R' && !arr[i+1])end = i+1, arr[i] = 1;
            else if(s[i] == 'L'){
                end = i-1;
                arr[i] = 1;
                if(arr[i-1]) break;
            }
            else break;
        }
        cout << ++start << ' ' << ++end << endl;
    }
    Time
}
