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
    int ops = 0;
    cin >> T;
    while(T--)
    {
        int l , r ;
        cin >> l >> r;
        int mx = r%l;
        //for(int i = 0 ; i <= r; i++){
         //   ops++;
            /*
            for(int j = l; j <= i; j++){
                ops++;
                if(j > i)break;
                 cout << i << " % " << j << " = " << i % j << endl;
            }
            */
            if((r/2 +1) >= l)
           // mx = max(mx,i%(i/2 +1));
             mx = max(mx,r%(r/2 +1));
            
        //}
    
        cout << mx<< endl;
        //cout << "took " << ops << " operations "<< endl;
    }
}
