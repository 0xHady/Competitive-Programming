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
 
    int n,t;
    string s;
    cin>>n>>t>>s;
 
    for(int j = 0 ; j < t; j++)
        for(int i = 1 ; i < n ; i++)
            if(s[i] == 'G' && s[i-1] == 'B'){
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
 
    cout<<s;
}
