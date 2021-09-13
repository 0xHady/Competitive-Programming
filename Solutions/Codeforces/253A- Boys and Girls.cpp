#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x  minutes 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int T = 1;
    while(T--)
    {
        int n , m; cin >> n >> m;
        char a  = 'G', b = 'B';
        if(n > m){swap(n,m); swap(a,b);}
        while( n + m > 0){
            if(m > 0){cout <<a; m--;}
            if(n > 0){cout <<b; n--;}
        }
    }
}
