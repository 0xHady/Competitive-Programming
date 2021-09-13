// Problem URL: 
#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int even = 0, odd = 0, sizee = 0;
 
void dosomestuff(map<char,int> &mp){
    for(auto it:mp)
        if(it.second %2 == 0) even++; else odd++;
}
bool canBePal(map<char,int> &mp){
    if(sizee%2 == 0) {if(odd > 0) return false;}
    else {if(odd > 1) return false;}
    return true;
}
void removeLetter(map<char,int>&mp){
    for(auto it:mp) if(it.second%2 != 0){it.second--; break;}
    odd--;
    sizee--;
}
thats_what_she_said // x minutes 
    string s; cin >> s ;
    sizee = s.size();
    map <char,int> mp;
    for(int i = 0 ; i < s.size() ; i++)
        mp[s[i]]++;
    dosomestuff(mp);
    string turn = "First";
    for(;;){
        if(canBePal(mp)){cout << turn; break;}
        else removeLetter(mp);
 
       if(turn == "First") turn = "Second"; else turn = "First"; 
    }
}
 
