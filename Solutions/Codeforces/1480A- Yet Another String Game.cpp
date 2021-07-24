#include <bits/stdc++.h>
 
using ll = long long ;
using ull = unsigned long long ;
#define pint  pair<int,int>
#define vint  vector <int> 
#define vpint  vector <pair<int,int>> 
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define sortv(v) sort(v.begin(),v.end())
#define revv(v) reverse(v.begin(),v.end())
#define rep(x) for(int xzcv5423 = 0 ; xzcv5423 < x ; xzcv5423++)
 
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
char choose(char a, bool aliceturn){
    if(aliceturn)
    for(char i = 'a' ; i <= 'z' ; i++){
        if(a != i)
            return i;
    }
    else 
    for(char i = 'z' ; i >= 'a' ; i--)
        if(a != i)
            return i;
 
}
 
int main() 
{
    Hello_World
    // letMeIn
    // USACO("cowtip")
 
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool alice = 1;
 
        for(int i = 0 ; i < s.length() ; i++)
        {
            string a = "";
            char b = choose(s[i],alice);
            a+=b;
            s.replace(i,1,a);
            alice = !alice;
        }
        cout<<s<<endl;
        
 
 
    }
 
    
 
}
