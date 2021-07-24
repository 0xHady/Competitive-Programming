#include <bits/stdc++.h>
 
#define ll long long 
#define Hello_World ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{
    Hello_World
 
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        int sheets =1;
 
        while(w >0 && h >0 && (w%2 ==0 || h%2 == 0)){
        
        if(w%2 == 0 && h%2== 0)
        {
            if(w>= h)
                w/=2;
            else 
                h/=2;
            sheets*=2;
        }
        else if(w%2 == 0)
        {
            w/=2;
            sheets*=2;
        }
        else if (h%2 == 0)
        {
            h/=2;
            sheets*=2;
        }
        }
        if(sheets >= n)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
 
    }
 
}
