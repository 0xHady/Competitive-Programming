#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){ 
 thats_what_she_said
    string s; cin >> s;
    int sz = s.size();
    for(int i = 0 ; i < sz; ){
        int t = i;
        if(s[i]   != '1') {cout << "NO" << endl; return 0;}
        if(s[i+1] == '1') {i++; continue;}
        if(s[i+1] == '4') t++;
        if(s[i+2] == '4') t++;
        t++; 
        i = t;
        if(i >= sz) break;
    }
    cout << "YES" << endl;
 
    
}
