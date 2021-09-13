#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
struct types{
    int girls = 0;
    int taxi = 0;
    int pizza = 0;
};
string correct(string s){
    string res = "";
    for(int i = 0 ; i < s.size(); i++)
        if(s[i] !='-')
            res+=s[i];
    return res;
}
bool isTaxi(string s){
    char a = s[0];
    for(int i = 0 ; i < s.size(); i++)
        if(s[i] != a && s[i] != '-')
            return false;
    return true;
}
bool isPizza(string ss){
    string s = correct(ss);
    for(int i = 1 ; i < s.size() ; i++)
        if((s[i] - '0') >=(s[i-1] - '0')  && s[i] != '-')
            return false;
    return true;
}
 
map <string,types> mp;
vector <pair<string,types>> v;
types a;
//a.girls = a.pizza = a.taxi = 0;
 
int main(){ // THIS IS A USELESS PROBLEM, I DON'T RECOMMEND ANYONE TO WASTE HIS TIME ON IT 
 thats_what_she_said
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        string name; cin >> name;
        v.push_back({name,a});
        mp[name].girls = 0;
        mp[name].taxi  = 0;
        mp[name].pizza = 0;
        for(int i = 0; i < n; i++){
            string number; cin >> number;
            if(isPizza(number)) mp[name].pizza++;
            else if(isTaxi(number)) mp[name].taxi++;
            else mp[name].girls++;
        }
    }
    int mxG = -1  , mxT = -1 , mxP = -1 ;
    string G ,T, P ;
    for(auto it:mp){
        mxG = max(mxG,it.second.girls);
        mxP = max(mxP,it.second.pizza);
        mxT = max(mxT,it.second.taxi);
    }
 
    for(int i = 0 ; i < v.size() ; i++){
        v[i].second.girls = mp[v[i].first].girls;
        v[i].second.taxi = mp[v[i].first].taxi;
        v[i].second.pizza = mp[v[i].first].pizza;
    }
    
    bool fg,ft,fp; fg = ft = fp = false;
 
    cout<<"If you want to call a taxi, you should call: ";
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i].second.taxi == mxT){if(ft){cout<<", ";} cout << v[i].first;ft = 1;} 
    }
    cout << "." << endl;
 
    cout<<"If you want to order a pizza, you should call: ";
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i].second.pizza == mxP){if(fp){cout<<", ";} cout << v[i].first;fp = 1;} 
    }
    cout << "." << endl;
 
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i].second.girls == mxG){if(fg){cout<<", ";} cout << v[i].first;fg = 1;} 
    }
    cout << "." << endl;
    
}
