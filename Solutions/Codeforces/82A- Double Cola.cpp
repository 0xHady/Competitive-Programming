#include <bits/stdc++.h>
#define ll long long 
#define Hello_World ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{
    Hello_World
    
    int n ;
    cin>> n ;
 
    ll sum = 0,lev,pre;
    int i = 0;
 
 
    while(sum < n)
    {
        lev = 5*pow(2,i);
        pre=sum;
        sum+=lev;
        i++;
    }
    i--; 
 
    // i is the lever (starting from zero)
    // pre is the sum of all previous levels
    // sum is the sum of all levels including the current
 
    // cout<<pre<<endl;
    // cout<<i<<endl;
    // cout<<sum<<endl;
 
    n-=pre;
 
    int j =1;
    while(1)
    {
        if(n <= j*pow(2,i))
            break;
        j++;
    }
 
    switch (j)
    {
    case 1:
        cout<<"Sheldon";
        break;
    case 2:
        cout<<"Leonard";
        break;
    case 3:
        cout<<"Penny";
        break;
    case 4:
        cout<<"Rajesh";
        break;
    case 5:
        cout<<"Howard";
        break;
    
    default:
        break;
    }     
}
