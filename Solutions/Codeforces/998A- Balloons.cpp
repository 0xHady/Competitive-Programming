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
 
 
int main() 
{
    Hello_World
    // letMeIn
    vint a;
    int n;
    cin >> n;
    int minn = INT_MAX;
    int pos = 0;
    for (int i=0 ; i < n ; i++){
        int t;
        cin >> t;
        a.pb(t);
        if(t < minn){ pos = i; minn = t;}
        
    }
 
    if(n ==1){cout << -1; return 0;}
    if(n ==2 ) {if(a[0] == a[1]) cout << -1; else  cout <<1 << endl << 1; return 0;}
    
    cout << n-1 << endl;
    for(int i = 0 ; i < n ;i++){
        if(i != pos)
            cout << i+1 << " ";
    }
 
 
 
    
}
 
