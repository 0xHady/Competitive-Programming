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
int bsLowerIt(int lo, int hi, int target, vector <int> &a){ //lower Bound    // first to  >= target
    while (lo < hi){
        int mid = (lo + hi ) / 2;
        if( a[mid] >= target) hi = mid;
        else lo = mid + 1 ;
    }
    return (a[lo] >= target ? lo : -1);
}
 
vector <int> y;
thats_what_she_said // x  minutes 
 
    for(int i = 0 ; i*i <= 1e9  ; i++)
        y.pb((i+1)*(i+1));
 
 
    int T = 1,n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        int layer =  bsLowerIt(0,y.size()-1,n,y) +1 ;
        int end  = layer*layer;
        int start = (layer -1)*(layer - 1) + 1;
        if(abs(n - start) == abs(n-end)) cout << layer << ' '<< layer << endl;
        else if (abs(n-start) < abs(n-end)) cout  <<abs(n-start) +1 << ' ' << layer << endl;
        else cout << layer << ' ' << abs(n-end) + 1 << endl; 
    }
}
