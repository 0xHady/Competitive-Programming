#include <bits/stdc++.h>
 
using ll = long long ;
using ull = unsigned long long ;
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define sortv(v) sort(v.begin(),v.end())
 
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
bool isV(char x){
    if(x == 'a' || x == 'e'|| x == 'i' || x == 'o'||x == 'u' )
        return true;
    return false;
}
int main()
{
    Hello_World
    // letMeIn
    // USACO("triangles")
 
    string s;
    cin>>s;
    // s+="5";
    bool itis = 1;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == 'n'){
            continue;
        }
        if(!isV(s[i]))
            if(!isV(s[i+1]))
                itis= 0;
 
 
    }
    if(itis)
        yup
    else 
        nope
    
 
}
 
