#include <bits/stdc++.h>
using namespace std;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long 
 
int n , t,s;
ll MAX = 0;
vector <int> v;
 
bool check(int i , int mid){
    return (v[mid]-v[i-1] <=t);
}
 
thats_what_she_said // 
 
    cin >> n >> t;
    v.resize(n+1);
    v[0] = 0;
    for(int i = 1 ; i <= n; i++)cin >> s, v[i] = s+v[i-1];
 
    for(int i = 1; i <= n;i++){
        ll start = i;
        ll end = v.size()-1;
        ll mid ;
 
        while(start < end){
            mid = (start + end + 1 ) / 2;
 
            if(check(i,mid)) start = mid; 
            else end = mid -1; 
        }
 
        if(check(i,end))
            MAX = max(MAX,end -i+1);
    }
    cout << MAX << endl;
}
