#include <bits/stdc++.h>
#define ll long long 
#define Hello_World ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{
    Hello_World
    
    string s;
    cin>>s;
    string remov =" ";
    while(s.find("WUB") != string::npos)
        s.replace(s.find("WUB"),3,remov);
    while(s[0] == ' ')
        s.erase(0,1);
    while(s[s.size()-1] == ' ')
        s.erase(s.size()-1,1);
 
    remov+=remov;
    while(s.find(remov) != string::npos)
        s.erase(s.find(remov),1);
 
 
 
        // some bullshit
    // for(int i =0 ; ; i++)
    // {
    //     string hold="";
    //     hold += s[i];
    //     if(hold == remov)
    //     {
    //         s.erase(i,remov.size());
    //     }
    //     if(i == s.size()-1)
    //     {
    //         i = 0;
    //         remov+=remov;
    //         if(s.find(remov) == string::npos)
    //         {
    //             break;
    //         }
    //     }
 
    // }
    
    cout<<s;
        
}
