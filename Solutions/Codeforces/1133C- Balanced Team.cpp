#include <bits/stdc++.h>
 
using ll = long long ;
using ull = unsigned long long ;
#define pint  pair<int,int>
#define vint  vector <int> 
#define vpint  vector <pair<int,int>> 
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin); freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define sortv(v) sort(v.begin(),v.end())
#define revv(v) reverse(v.begin(),v.end())
#define rep(x) for(int xzcv5423 = 0 ; xzcv5423 < x ; xzcv5423++)
 
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back
#define pi 3.14159265359
#define endl "\n"
 
using namespace std;
void takeintv(vector <int>& v,int size){
    for(int i = 0; i < size ; i++)
        cin>> v[i];
}
void printv(vector <int>& v){
    for(int i = 0; i < v.size() ; i++)
        cout << v[i] << " ";
}
//**************************************************//
const int N = 5e5 + 5;
int a[N],n;
bool check(int len){
    for (int i = 0 ; i + len - 1  < n ; i++){
        if(a[i + len - 1] - a[i] <= 5 ) return true;
    }
    return false;
}
 
 
int main() 
{
    Hello_World
    // letMeIn
 
    cin >> n; 
    for(int i  = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,a+n);
    int lo =1 , hi = n,mid;
    while(lo < hi){
        mid = lo + (hi - lo + 1) /2 ; 
        if(check(mid)) lo = mid;
        else hi = mid - 1;
    }
    cout << lo ;
    
}
 
