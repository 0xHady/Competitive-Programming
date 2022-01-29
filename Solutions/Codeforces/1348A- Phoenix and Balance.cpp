#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define pb push_back
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
ll sam(int n){
 return pow(2,n+1)-2;
}
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
using namespace std;
thats_what_she_said // x  minutes 
    int T = 1;
    cin >> T;
    while(T--)
    { 
 int n; cin >> n;
 ll sum = sam(n);
 ll x = n/2 -1;
 ll a = pow(2,n)+sam(x) ;
 ll b = sum - a;
 
 
 cerr << "a: " << a << endl;
 cerr << "b: " << b << endl;
 
 cout << a - b << endl;
 
 
 
    }
}
