#include <bits/stdc++.h>
using namespace std;
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define pb push_back
#define F first
#define S second
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define lzeros(mask) __builtin_clz(mask) // no of leading zeros
#define tzeros(mask) __builtin_ctz(mask) // no of trailing zeros
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
#define endl "\n"
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
vector <string > v = { {"qwertyuiop"},
                       {"asdfghjkl;"},
                       {"zxcvbnm,./"} };
char shift;
map <char,pair<int,int>> mp;
 
char solve(char ch){
    int i = mp[ch].first;
    int j = mp[ch].second;
   if(shift == 'R')
        return v[i][j-1];
    else 
        return v[i][j+1]; 
}
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
 
        for(int i =0 ; i < 3 ; i++)
            for(int j = 0 ; j < v[i].size() ; j++)
                mp[v[i][j]] = {i,j};
 
       cin >> shift;
       string s; 
       cin >> s;
 
       for(int i = 0 ; i < s.size() ; i++)
           cout << solve(s[i]);
      
    }
}
