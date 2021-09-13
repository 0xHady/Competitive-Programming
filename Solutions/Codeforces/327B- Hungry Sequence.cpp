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
bool isPrime(int x){
    if(x%2 == 0 ) return false;
    int root  = sqrt(x);
    for(int i = 3; i <=root ; i++)
        if(x%i == 0)
            return false;
    return true;
}
thats_what_she_said // x  minutes 
    int n; cin >> n;
    int c = 0 ; 
    for(int i = 3 ;c < n ; i++)
        if(isPrime(i)){
            cout << i << ' ';
            c++;
        }
}
