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
thats_what_she_said // x  minutes 
    int T = 1;
    cin >> T;
    while(T--)
    {
        int n,idx = 0; cin >> n;
        char grid[n][n]{};
        string types = "";
        int sec = 0;
        vector <int> sex;
        for(int i = 0 ; i < n ; i++){ 
            char c; cin >> c;
            if(c=='2'){sec++; sex.pb(i);}
            types+=c;
        }
 
        if(sec == 1 || sec == 2){cout << "NO" << endl;  continue;}
 
        for(int i =0 ; i < n;i++){
            bool won = 0;
            for(int j = 0 ; j < n ; j++){
                if(i == j){ grid[i][j] = 'X'; continue;}
                if(grid[i][j])continue;
                
                if(types[i] == '1' || types[j] == '1'){
                    grid[i][j] = grid[j][i] = '=';
                    continue;
                }
                
                if(!won && i == sex[idx]  && j == sex[(idx+1)%sex.size()] )
                    grid[i][j] = '+',
                    grid[j][i] = '-',
                    won = 1,
                    idx++;
                else
                    grid[i][j] = '-',
                    grid[j][i] = '+';
                
 
            }
        }
 
        cout << "YES" << endl;
        for(int i = 0 ; i < n ; i++){
             for(int j = 0 ; j < n; j++){
                 cout << grid[i][j];
             }
             cout << endl;
        }
 
    }
    Time
}
