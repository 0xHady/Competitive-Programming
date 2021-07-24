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
#define rep(x) for(int xzcv5423 = 0 ; xzcv5423 < x ; xzcv5423++)
 
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
int main() 
{
    Hello_World
    // letMeIn
    // USACO("cowtip")
 
    string s;
    cin>>s;
    s+="H";
    string res= "";
 
    for(int i = 0 ; i < s.length()-1 ; i++)
        if(s[i] == '.')
            res+="0";
        else
        {
            if(s[i+1] == '.')
                res+="1";
            else
                res+="2";
            
            i++;
        }
            
    
    cout<<res;
}
