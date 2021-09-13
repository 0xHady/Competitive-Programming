#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes
    string t; cin >> t;
    int streak0 = 0, streak1 = 0 ; 
    if(t[0] == '0') streak0++; else streak1++;
 
    for(int i = 1 ; i < t.size() ; i++){
      if(t[i] == '0'){streak0++; streak1 = 0;}
      else {streak1++; streak0 = 0;}
     if(streak0 == 7 || streak1 == 7) {cout << "YES"; return 0;} 
    }
    cout << "NO" ;
}
 
