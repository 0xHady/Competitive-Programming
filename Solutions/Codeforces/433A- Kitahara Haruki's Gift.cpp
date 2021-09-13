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
// NBMS
thats_what_she_said // x  minutes 
    int n; cin >> n;
    int a = 0;
    for(int i = 0 ; i < n; i++){ int q; cin >> q; q==100 ? a++: a;}
    if(a%2== 0 && (n-a)%2==0) yup
    else if((n-a)%2 !=0 && a%2 ==0 && a>=2) yup
    else nope
}
