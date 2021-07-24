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
 
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
bool palindrome(string s){
    for(int i = 0 ; i < s.size()/2 ; i++){
        if(s[i] != s[s.size()-i-1])
            return false;
    }
    return true;
}
 
int main() 
{
    Hello_World
    // letMeIn
    // USACO("cowtip")
    string s;
    cin>>s;
 
        for(int i = 0 ; i  < s.size() ; i++){
            string t = s;
            bool e = i < s.size()/2;
            char a = s[s.size()-i-e];
            string m = "";
            m+=a;
            t.insert(i,m);
            if(palindrome(t)){
                cout<<t;
                return 0;
            }
 
        }
        string t = s;
        t+=s[0];
        if(palindrome(t))
            cout<<t;
        else
            cout<<"NA";
 
    
    
}
