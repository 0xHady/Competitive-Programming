#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
map <int,pair<int,int>> mp;
map <int, int> last;
int blocked = 0;
thats_what_she_said // x minutes 
    int n; cin >> n;
    for(int i  = 0 ; i < n; i++){
        int t; cin >> t;
        int timee = mp[t].first;
        if(mp[t].first == -1) continue;
        if(timee == 0){last[t] = i; mp[t].second = i;}
        else if(timee == 1){ 
            mp[t].second = i - mp[t].second;
            last[t] = i;
        }
        else{ 
            if(i - last[t] != mp[t].second){
                mp[t].first = -1;
                blocked++;
                continue;
            }
        }
        last[t] = i;
        mp[t].first++;
        //cout <<"i, t, mp[t].second:  " <<i<< ' ' <<t<< ' '<< mp[t].second << endl;
    }
    cout << mp.size()-blocked << endl;
    for(auto &it:mp){ 
        if(it.second.first == -1) continue;
        cout << it.first<< ' ';
        if(it.second.first != 1)
        cout << it.second.second ;
        else 
            cout << 0 ;
        cout << endl;
    }
}
 
