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
 
using namespace std;
 
int main()
{
    Hello_World
    // letMeIn
    // USACO("mowing")
 
    string s;
    cin>>s;
 
    bool firstIsUpper = 0;
    bool restIsUpper = 1;
    if(isupper(s[0]))  firstIsUpper = 1;
 
    for(int i = 1 ; i < s.size() ; i++)
        if(!isupper(s[i]))
            restIsUpper = 0;
    if(firstIsUpper && restIsUpper)
        for(int i = 0 ; i < s.size() ; i++)
           s[i] =  tolower(s[i]);
 
    else if( firstIsUpper == 0 && restIsUpper)
    {
        s[0] = toupper(s[0]);
        for(int i = 1 ; i < s.size() ; i++)
            s[i] = tolower(s[i]);
    }
 
    cout<<s;
}
