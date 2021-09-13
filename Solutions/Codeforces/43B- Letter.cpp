#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x  minutes 
    map <char,int> mp1,mp2;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i = 0 ; i < s1.size(); i++) if(s1[i] != ' ') mp1[s1[i]]++;
    for(int i = 0 ; i < s2.size(); i++) if(s2[i] != ' ') mp2[s2[i]]++;
 
    for(auto it:mp2){
        //cout << it.first << ' ' << it.second << ' ' << mp1[it.first] << endl;
        if(it.second > mp1[it.first]){cout << "NO"; return 0;}
    }
    cout << "YES";
}
