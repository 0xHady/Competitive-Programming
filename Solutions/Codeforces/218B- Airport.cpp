#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int n;
int summa(int n){
    return (n*(n+1))/2;
}
int part(int left, int vi){
    int res = 0;
    while(left--){
        res+=vi;
        vi--;
    }
    return res;
}
int PlayOptimal(vector <int> &v){
   int res = 0; 
   int left = n;
   for(int i = 0 ; i < v.size() ; i++){
        if(left <= 0) break;
        if(left >= v[i]) {res+= summa(v[i]);}
        else res += part(left,v[i]);
       left -= v[i]; 
   } 
   return res;
}
int PlayCounterOPtimal(vector <int> &v){
   int res = 0; 
   int left = n;
   for(int i = 0 ;  ;  ){
        if(left <= 0)break ;
 //cout << "vi:  " << v[i] << endl;
        res+=v[i];
        v[i]--;
        left--; 
        if(v[i] <  v[(i+1)%v.size()]) i = (i+1)%v.size();
 else i = 0;
   } 
   return res;
}
thats_what_she_said // x minutes 
    int  m; cin >> n >> m;
    vector <int> v(m);
    for(auto &x:v) cin >> x;
    sort(all(v));
    int mn= PlayOptimal (v);
    sort(rall(v));
    int x = PlayCounterOPtimal (v);
    cout << x << ' ' << mn ;
}
 
 
