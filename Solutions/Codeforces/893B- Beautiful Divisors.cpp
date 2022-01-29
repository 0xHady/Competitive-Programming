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
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
vector <int> twopower(32);
vector <int> divs1;
vector <int> divs2;
void filltwos(){
    for(int i = 0 ; i <= 32 ; i++)
     twopower[i] = pow(2,i);
}
 
int frm(int k ){
    return (twopower[k]-1) * twopower[k-1];
}
 
void fillDivs(int n){
    for(int i = 1 ; i*i <= n ;i++){
        if(!(n%i)){
            divs1.pb(i);
            if(i != (n/i))
                divs2.pb(n/i);
        }
    }
}
 
void check(vector <int> &divs, int i){
    for(int j = 1; j <=32 ; j++)
        if(frm(j) == divs[i]){
            cout << divs[i];
            Time
            exit(0);
        } 
}
 
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)// A better solution :)
    {
        int n ;cin>> n;
        fillDivs(n);
        filltwos();
 
        for(int i = 0 ; i < divs2.size() ; i++) 
            check(divs2,i);
        for(int i = divs1.size()-1 ; i >= 0 ; i--) 
            check(divs1,i);
    }
    Time
}
