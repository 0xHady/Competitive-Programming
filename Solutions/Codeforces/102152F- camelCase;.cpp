#include <bits/stdc++.h>
using ll = long long ;
using ull = unsigned long long ;
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define nopos string::npos
 
 
using namespace std;
 
int main()
{
    Hello_World
    // letMeIn
    // USACO("mowing")
    int t;
    cin>>t;
    int c ;
    while(t--){
        c = 1;
        string s;
        cin>>s;
        for(int i = 0;i < s.length() ; i++)
            if(isupper(s[i]))
                c++;
 
        if(c <= 7)
            yup
        else 
            nope
    }
}
