#include <bits/stdc++.h>
#define ll long long 
#define Hello_World ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{
    Hello_World
    int x , y;
    int t;
    for (int i = 1 ; i<=5  ; i++)
        for (int j = 1 ; j<=5  ; j++){
            cin>>t;
            if(t == 1)
            {
                x = i;
                y = j;
            }
        }
 
    cout<<abs(3-x)+abs(3-y);
        
}
