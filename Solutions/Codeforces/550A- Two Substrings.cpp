#include <bits/stdc++.h>
using namespace std;
bool check(string s, string a, string b){
    if(s.find(a) == -1) return 0;
    s.insert(s.find(a),"z");
    s.erase(s.find(a)+1,2);
    if(s.find(b) == -1) return 0;
    return 1;
}
void solve3(){
    string s; cin >> s; 
    if(check(s,"AB","BA") || check(s,"BA","AB")) cout << "YES"; else cout << "NO"; 
}
int main(){ solve3(); }
 
