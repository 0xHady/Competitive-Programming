#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
vector <int> res;

void primeFact(int n){
    for(int i = 2 ; i*i <= n ;i++)
        while(n%i ==  0){
            n/=i;
            res.pb(i);
        }

    if(n!=1)res.pb(n);
}

int main(){
        int n; cin >>n ;
        primeFact(n);
        for(auto &x:res) cout << x << ' ';
    
    Time
}
