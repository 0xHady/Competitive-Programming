#include <iostream> 
#include <cmath>
#include <algorithm> 
#include <string> 
using namespace std;
 
int main(){
 
    long long n , b , d , a , i , wastes = 0 , c = 0;
    cin>>n>>b>>d;
    for( i = 0 ; i< n ; i++)
    {
        cin>>a;
        if(a > b)
        {
            continue;
        }
        else
        {
            wastes += a;
        }
 
        if(wastes > d)
        {
            c++;
            wastes  = 0;
        }
    }
    cout<<c;
 
} 
