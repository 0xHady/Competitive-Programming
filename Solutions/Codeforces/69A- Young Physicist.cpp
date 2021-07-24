#include <bits/stdc++.h>
 
#define ll long long 
#define Hello_World ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{
    Hello_World
    
    int n;
    cin>>n;
    int ax = 0, ay= 0 ,az = 0;
 
    for(int i = 0 ; i < n ; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        ax+=x;
        ay+=y;
        az+=z;
    }
    if(ax == 0 && ay == 0 && az == 0)
        cout<<"YES";
    else    
        cout<<"NO";
}
