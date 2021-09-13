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
    string s; cin >> s;
    bool f = 1;
    for(int i = 0 ; i < s.size() ; i++){
        if(i == s.size()-1 && f == 1 && s[i] != '0') continue;
        if(f && s[i] == '0'){f = 0; continue;}
        cout << s[i];
    }
}
