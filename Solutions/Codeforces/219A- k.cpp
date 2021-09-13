#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes
    int k; cin >> k;
    string s; cin >> s;
    sort(all(s));
    map <char,int> mp;
    for(int i = 0 ; i < s.size(); i++){
        mp[s[i]]++;
    }
    string origi = "" ;
    for(auto it:mp){
        if(it.second%k != 0 ){
            cout << -1;
            return 0;
        }else{
            for(int i = 0 ; i < it.second / k; i++) origi += it.first;
        }
    }
    while(k--) cout<< origi;
    
}
 
