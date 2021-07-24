#include <bits/stdc++.h>
 
#define ll long long 
#define Hello_World ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{
    Hello_World
    
    string hello = "hello";
    string s;
    cin>>s;
    bool h = 0;
    int j = 0;
    for(int i = 0 ; i< s.size() ; i++)
    {
        if(s[i] == hello[j])
            j++;
        if(j == hello.size())
        {
            cout<<"YES";
            return 0;
        }
 
    }
    cout<<"NO";
}
