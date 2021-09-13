#include <bits/stdc++.h>
using namespace std;
void fast(){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
const int N = 5e7 + 7;
#define ll long long
#define ld long double
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define SZ(x) x.size()
#define fr first
#define sc second
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define popf pop_front()
#define popb pop_back()
#define pi pair<int,int>
#define pl pair<ll,ll>
#define pd pair<double,double>
#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vd vector<double>
#define vs vector<string>
#define vpi vector<pi>
#define vpl vector<pl>
#define vpd vector<pd>
#define MP make_pair
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define lb lower_bound
#define ub upper_bound
vector<int>divs;
void divisors(int n) {
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            divs.emplace_back(i);
            if(n / i != i && n / i != n)
                divs.emplace_back(n / i);
        }
    }
}
int main() {
    //fast();
    //freopen("bugged.in","r", stdin);
    int n;
    while(cin >> n && n != -1) {
        divs.clear();
        divisors(n);
        sort(divs.begin(),divs.end());
        ll sum = 0;
        for(int i = 0; i < divs.size(); i++)
            sum += divs[i];
        if(sum == n) {
            cout << n << " = ";
            for(int i = 0; i < divs.size(); i++)
                if(i != divs.size() - 1)
                cout << divs[i] << " + ";
                else
                    cout << divs[i];
            cout << "\n";
        }
        else {
            cout << n << " is NOT perfect.\n";
        }
    }
 
    return 0;
}
